#ifndef _javax_imageio_plugins_jpeg_JPEGQTable_h_
#define _javax_imageio_plugins_jpeg_JPEGQTable_h_
//$ class javax.imageio.plugins.jpeg.JPEGQTable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace jpeg {

class $import JPEGQTable : public ::java::lang::Object {
	$class(JPEGQTable, 0, ::java::lang::Object)
public:
	JPEGQTable();
	void init$($ints* table, bool copy);
	void init$($ints* table);
	virtual ::javax::imageio::plugins::jpeg::JPEGQTable* getScaledInstance(float scaleFactor, bool forceBaseline);
	virtual $ints* getTable();
	virtual $String* toString() override;
	static $ints* k1;
	static $ints* k1div2;
	static $ints* k2;
	static $ints* k2div2;
	static ::javax::imageio::plugins::jpeg::JPEGQTable* K1Luminance;
	static ::javax::imageio::plugins::jpeg::JPEGQTable* K1Div2Luminance;
	static ::javax::imageio::plugins::jpeg::JPEGQTable* K2Chrominance;
	static ::javax::imageio::plugins::jpeg::JPEGQTable* K2Div2Chrominance;
	$ints* qTable = nullptr;
};

			} // jpeg
		} // plugins
	} // imageio
} // javax

#endif // _javax_imageio_plugins_jpeg_JPEGQTable_h_