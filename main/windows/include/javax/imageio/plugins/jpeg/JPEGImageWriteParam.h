#ifndef _javax_imageio_plugins_jpeg_JPEGImageWriteParam_h_
#define _javax_imageio_plugins_jpeg_JPEGImageWriteParam_h_
//$ class javax.imageio.plugins.jpeg.JPEGImageWriteParam
//$ extends javax.imageio.ImageWriteParam

#include <java/lang/Array.h>
#include <javax/imageio/ImageWriteParam.h>

namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace imageio {
		namespace plugins {
			namespace jpeg {
				class JPEGHuffmanTable;
				class JPEGQTable;
			}
		}
	}
}

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace jpeg {

class $import JPEGImageWriteParam : public ::javax::imageio::ImageWriteParam {
	$class(JPEGImageWriteParam, $NO_CLASS_INIT, ::javax::imageio::ImageWriteParam)
public:
	JPEGImageWriteParam();
	void init$(::java::util::Locale* locale);
	virtual bool areTablesSet();
	virtual $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* getACHuffmanTables();
	virtual $StringArray* getCompressionQualityDescriptions() override;
	virtual $floats* getCompressionQualityValues() override;
	virtual $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* getDCHuffmanTables();
	virtual bool getOptimizeHuffmanTables();
	virtual $Array<::javax::imageio::plugins::jpeg::JPEGQTable>* getQTables();
	virtual bool isCompressionLossless() override;
	virtual void setEncodeTables($Array<::javax::imageio::plugins::jpeg::JPEGQTable>* qTables, $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* DCHuffmanTables, $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* ACHuffmanTables);
	virtual void setOptimizeHuffmanTables(bool optimize);
	virtual void unsetCompression() override;
	virtual void unsetEncodeTables();
	$Array<::javax::imageio::plugins::jpeg::JPEGQTable>* qTables = nullptr;
	$Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* DCHuffmanTables = nullptr;
	$Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* ACHuffmanTables = nullptr;
	bool optimizeHuffman = false;
	$StringArray* compressionNames = nullptr;
	$floats* qualityVals = nullptr;
	$StringArray* qualityDescs = nullptr;
};

			} // jpeg
		} // plugins
	} // imageio
} // javax

#endif // _javax_imageio_plugins_jpeg_JPEGImageWriteParam_h_