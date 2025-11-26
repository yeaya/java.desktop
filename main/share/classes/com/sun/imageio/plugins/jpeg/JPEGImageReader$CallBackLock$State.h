#ifndef _com_sun_imageio_plugins_jpeg_JPEGImageReader$CallBackLock$State_h_
#define _com_sun_imageio_plugins_jpeg_JPEGImageReader$CallBackLock$State_h_
//$ class com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock$State
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JPEGImageReader$CallBackLock$State : public ::java::lang::Enum {
	$class(JPEGImageReader$CallBackLock$State, 0, ::java::lang::Enum)
public:
	JPEGImageReader$CallBackLock$State();
	static $Array<::com::sun::imageio::plugins::jpeg::JPEGImageReader$CallBackLock$State>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::imageio::plugins::jpeg::JPEGImageReader$CallBackLock$State* valueOf($String* name);
	static $Array<::com::sun::imageio::plugins::jpeg::JPEGImageReader$CallBackLock$State>* values();
	static ::com::sun::imageio::plugins::jpeg::JPEGImageReader$CallBackLock$State* Unlocked;
	static ::com::sun::imageio::plugins::jpeg::JPEGImageReader$CallBackLock$State* Locked;
	static $Array<::com::sun::imageio::plugins::jpeg::JPEGImageReader$CallBackLock$State>* $VALUES;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JPEGImageReader$CallBackLock$State_h_