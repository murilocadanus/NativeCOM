package;

#if cpp
import cpp.Lib;
#elseif neko
import neko.Lib;
#end

class NativeCOM
{
	public static function sum(aInputValue:Int, bInputValue:Int):Int
	{	
		return nativecom_sum(aInputValue, bInputValue);
	}

	public static function byteString():String
	{	
		return nativecom_byte_string();
	}

	public static function byteArray():Array<cpp.UInt8>
	{	
		return nativecom_byte_array();
	}

	public static function byteImageArray():Array<cpp.UInt8>
	{	
		return nativecom_byte_image_array();
	}
	
	private static var nativecom_sum = Lib.load("nativecom", "nativecom_sum", 2);
	private static var nativecom_byte_string = Lib.load("nativecom", "nativecom_byte_string", 0);
	private static var nativecom_byte_array = Lib.load("nativecom", "nativecom_byte_array", 0);
	private static var nativecom_byte_image_array = Lib.load("nativecom", "nativecom_byte_image_array", 0);
}