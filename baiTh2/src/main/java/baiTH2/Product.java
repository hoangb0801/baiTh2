package baiTH2;



import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.Table;

@Entity
@Table(name = "product")
public class Product {
	@Id
	@Column(name = "code")
	private String code;
	@Column(name = "description")
	private String description;
	@Column(name = "price")
	private Float price;
	public String getCode() {
		return code;
	}
	public void setCode(String code) {
		this.code = code;
	}
	public String getDescription() {
		return description;
	}
	public void setDescription(String description) {
		this.description = description;
	}
	public Float getPrice() {
		return price;
	}
	public void setPrice(Float price) {
		this.price = price;
	}
	public Product(String code, String description, Float price) {
		super();
		this.code = code;
		this.description = description;
		this.price = price;
	}
	public Product() {
		super();
	}
	
}
