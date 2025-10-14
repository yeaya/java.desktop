#ifndef _javax_imageio_plugins_jpeg_JPEGImageReadParam_h_
#define _javax_imageio_plugins_jpeg_JPEGImageReadParam_h_
//$ class javax.imageio.plugins.jpeg.JPEGImageReadParam
//$ extends javax.imageio.ImageReadParam

#include <java/lang/Array.h>
#include <javax/imageio/ImageReadParam.h>

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

class $export JPEGImageReadParam : public ::javax::imageio::ImageReadParam {
	$class(JPEGImageReadParam, $NO_CLASS_INIT, ::javax::imageio::ImageReadParam)
public:
	JPEGImageReadParam();
	void init$();
	virtual bool areTablesSet();
	virtual $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* getACHuffmanTables();
	virtual $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* getDCHuffmanTables();
	virtual $Array<::javax::imageio::plugins::jpeg::JPEGQTable>* getQTables();
	virtual void setDecodeTables($Array<::javax::imageio::plugins::jpeg::JPEGQTable>* qTables, $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* DCHuffmanTables, $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* ACHuffmanTables);
	virtual void unsetDecodeTables();
	$Array<::javax::imageio::plugins::jpeg::JPEGQTable>* qTables = nullptr;
	$Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* DCHuffmanTables = nullptr;
	$Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* ACHuffmanTables = nullptr;
};

			} // jpeg
		} // plugins
	} // imageio
} // javax

#endif // _javax_imageio_plugins_jpeg_JPEGImageReadParam_h_