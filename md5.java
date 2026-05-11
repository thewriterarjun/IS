import java.security.*;
public class md5 {
    public static void main(String[] args) throws Exception {
        String text = "Hello";
        byte[] hash = MessageDigest.getInstance("MD5").digest(text.getBytes());
        System.out.println("MD5 Hash:");
        for (byte b : hash)
            System.out.printf("%02X", b);
    }
}