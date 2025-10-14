#ifndef _javax_imageio_plugins_jpeg_JPEGHuffmanTable_h_
#define _javax_imageio_plugins_jpeg_JPEGHuffmanTable_h_
//$ class javax.imageio.plugins.jpeg.JPEGHuffmanTable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace jpeg {

class $export JPEGHuffmanTable : public ::java::lang::Object {
	$class(JPEGHuffmanTable, 0, ::java::lang::Object)
public:
	JPEGHuffmanTable();
	void init$($shorts* lengths, $shorts* values);
	void init$($shorts* lengths, $shorts* values, bool copy);
	virtual $shorts* getLengths();
	virtual $shorts* getValues();
	virtual $String* toString() override;
	void validate();
	static $shorts* StdDCLuminanceLengths;
	static $shorts* StdDCLuminanceValues;
	static $shorts* StdDCChrominanceLengths;
	static $shorts* StdDCChrominanceValues;
	static $shorts* StdACLuminanceLengths;
	static $shorts* StdACLuminanceValues;
	static $shorts* StdACChrominanceLengths;
	static $shorts* StdACChrominanceValues;
	static ::javax::imageio::plugins::jpeg::JPEGHuffmanTable* StdDCLuminance;
	static ::javax::imageio::plugins::jpeg::JPEGHuffmanTable* StdDCChrominance;
	static ::javax::imageio::plugins::jpeg::JPEGHuffmanTable* StdACLuminance;
	static ::javax::imageio::plugins::jpeg::JPEGHuffmanTable* StdACChrominance;
	$shorts* lengths = nullptr;
	$shorts* values = nullptr;
};

			} // jpeg
		} // plugins
	} // imageio
} // javax

#endif // _javax_imageio_plugins_jpeg_JPEGHuffmanTable_h_