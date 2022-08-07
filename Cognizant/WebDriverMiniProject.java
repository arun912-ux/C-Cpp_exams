
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.NoAlertPresentException;	
import org.openqa.selenium.Alert;


class WebDriverMiniProject{

    public static void main(String[] args) {
        
        System.setProperty("webdriver.chrome.driver","G:\\chromedriver.exe");
		WebDriver driver = new ChromeDriver();  
	
        
        // Alert Message handling
                    		
        driver.get("http://demo.guru99.com/test/delete_customer.php");	

    }


}