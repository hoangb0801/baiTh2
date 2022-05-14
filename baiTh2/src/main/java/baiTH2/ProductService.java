package baiTH2;



import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import baiTH2.Product;
import baiTH2.ProductRepository;

@Service
public class ProductService {
	@Autowired
	private ProductRepository productRepository;
	public List<Product> getListProduct(){
		return productRepository.findAll();
	}
	public void saveProduct(Product product) {
		productRepository.save(product);
	}
	public boolean checkValidCode(String code) {
		Product product = productRepository.findByCode(code);
		if(product!=null||code.length()!=4) return false;
		return true;
	}
	public boolean isNumeric(String num) {
		if(num == null) return false;
		try {
			double d = Double.parseDouble(num);
		}
		catch (NumberFormatException e) {
			// TODO: handle exception
			return false;
		}
		return true;
	}
	public Product getProductByCode(String code) {
		return productRepository.findByCode(code);
	}
	public void saveUpdateProduct(Product p,Product np) {
		if(p!=null) {
			p.setDescription(np.getDescription());
			p.setPrice(np.getPrice());
			productRepository.save(p);
		}
	}
	public void deleteProduct(String code) {
		productRepository.deleteByCode(code);
	}
}
