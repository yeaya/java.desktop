#ifndef _sun_awt_IconInfo_h_
#define _sun_awt_IconInfo_h_
//$ class sun.awt.IconInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Image;
	}
}

namespace sun {
	namespace awt {

class $export IconInfo : public ::java::lang::Object {
	$class(IconInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IconInfo();
	void init$($ints* intIconData);
	void init$($longs* longIconData);
	void init$(::java::awt::Image* image);
	virtual int32_t getHeight();
	virtual ::java::awt::Image* getImage();
	virtual $ints* getIntData();
	virtual $longs* getLongData();
	virtual int32_t getRawLength();
	int32_t getScaledRawLength(int32_t w, int32_t h);
	static $ints* getScaledWidthAndHeight(int32_t width, int32_t height);
	virtual int32_t getWidth();
	static $ints* imageToIntArray(::java::awt::Image* image, int32_t width, int32_t height);
	static ::java::awt::Image* intArrayToImage($ints* raw);
	static $longs* intArrayToLongArray($ints* intData);
	virtual bool isValid();
	static $ints* longArrayToIntArray($longs* longData);
	virtual void setScaledSize(int32_t width, int32_t height);
	virtual $String* toString() override;
	$ints* intIconData = nullptr;
	$longs* longIconData = nullptr;
	::java::awt::Image* image = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	int32_t scaledWidth = 0;
	int32_t scaledHeight = 0;
	int32_t rawLength = 0;
};

	} // awt
} // sun

#endif // _sun_awt_IconInfo_h_