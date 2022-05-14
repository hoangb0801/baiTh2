package baiTH2;


import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import baiTH2.Product;
import baiTH2.ProductService;

import lombok.extern.log4j.Log4j2;
@Log4j2
@Controller
@RequestMapping("/index")
public class ProductController {
	@Autowired
	private ProductService productService;
	@GetMapping("/products")
	public String product(Model model){
		List<Product> products = productService.getListProduct();
		model.addAttribute("products", products);
		return "/products";
	}
	@GetMapping("/newProduct")
	public String newProduct(Model model) {
		model.addAttribute("product", new Product());
		return "/new_product";
	}
	@PostMapping("/saveProduct")
	public String saveNewProduct(@ModelAttribute("product") Product product,
			Model model) {
		log.info("Price: "+String.valueOf(product.getPrice()));
		if(!productService.checkValidCode(product.getCode())) {
			model.addAttribute("product", product);
			model.addAttribute("errorCode", "This code has existed or its length must be 4");
			return "/new_product";
		}
		else if(product.getDescription().trim().equals("")) {
			model.addAttribute("product", product);
			model.addAttribute("errorDes", "This field must be filled");
			return "/new_product";
		}
		else if(!productService.isNumeric(String.valueOf(product.getPrice()))) {
			model.addAttribute("product", product);
			model.addAttribute("errorPrice", "This price is invalid");
			return "/new_product";
		}
		else {
			productService.saveProduct(product);
			return "redirect:/index/products";
		}
		
	}
	@GetMapping("/update/{code}")
	public String updateProduct(@PathVariable("code") String code,Model model) {
		Product product = productService.getProductByCode(code);
		model.addAttribute("product", product);
		return "/update_product";
	}
	@PostMapping("/saveupdate/{code}")
	public String saveUpdate(@PathVariable("code") String code,
			Model model,
			@ModelAttribute("product") Product product) {
		if(product.getDescription().trim().equals("")) {
			model.addAttribute("product", product);
			model.addAttribute("errorDes", "This field must be filled");
			return "/update_product";
		}
		else if(!productService.isNumeric(String.valueOf(product.getPrice()))) {
			model.addAttribute("product", product);
			model.addAttribute("errorPrice", "This price is invalid");
			return "/update_product";
		}
		else {
			Product p = productService.getProductByCode(code);
			productService.saveUpdateProduct(p, product);
			return "redirect:/index/products";
		}
	}
	@GetMapping("/delete/{code}")
	public String delete(@PathVariable("code") String code ,Model model) {
		Product product = productService.getProductByCode(code);
		model.addAttribute("product", product);
		return "/delete";
	}
	@PostMapping("/confirmDelete/{code}")
	public String confirmDelete(@PathVariable("code") String code) {
		productService.deleteProduct(code);
		return "redirect:/index/products";
	}
	@GetMapping()
	public String home() {
		return "/index";
	}
}
