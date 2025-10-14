#ifndef _javax_imageio_ImageIO$CacheInfo_h_
#define _javax_imageio_ImageIO$CacheInfo_h_
//$ class javax.imageio.ImageIO$CacheInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}

namespace javax {
	namespace imageio {

class $export ImageIO$CacheInfo : public ::java::lang::Object {
	$class(ImageIO$CacheInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImageIO$CacheInfo();
	void init$();
	virtual ::java::io::File* getCacheDirectory();
	virtual ::java::lang::Boolean* getHasPermission();
	virtual bool getUseCache();
	virtual void setCacheDirectory(::java::io::File* cacheDirectory);
	virtual void setHasPermission(::java::lang::Boolean* hasPermission);
	virtual void setUseCache(bool useCache);
	bool useCache = false;
	::java::io::File* cacheDirectory = nullptr;
	::java::lang::Boolean* hasPermission = nullptr;
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageIO$CacheInfo_h_