#include <java/awt/SplashScreen.h>

#include <java/awt/Dimension.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Rectangle.h>
#include <java/awt/SplashScreen$1.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef TYPE_INT_ARGB

using $Dimension = ::java::awt::Dimension;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Rectangle = ::java::awt::Rectangle;
using $SplashScreen$1 = ::java::awt::SplashScreen$1;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

$FieldInfo _SplashScreen_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SplashScreen, $assertionsDisabled)},
	{"image", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $field(SplashScreen, image)},
	{"splashPtr", "J", nullptr, $PRIVATE | $FINAL, $field(SplashScreen, splashPtr)},
	{"wasClosed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SplashScreen, wasClosed)},
	{"imageURL", "Ljava/net/URL;", nullptr, $PRIVATE, $field(SplashScreen, imageURL)},
	{"theInstance", "Ljava/awt/SplashScreen;", nullptr, $PRIVATE | $STATIC, $staticField(SplashScreen, theInstance)},
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SplashScreen, log)},
	{}
};

$MethodInfo _SplashScreen_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, 0, $method(static_cast<void(SplashScreen::*)(int64_t)>(&SplashScreen::init$))},
	{"_close", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&SplashScreen::_close))},
	{"_getBounds", "(J)Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$Rectangle*(*)(int64_t)>(&SplashScreen::_getBounds))},
	{"_getImageFileName", "(J)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int64_t)>(&SplashScreen::_getImageFileName))},
	{"_getImageJarName", "(J)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int64_t)>(&SplashScreen::_getImageJarName))},
	{"_getInstance", "()J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&SplashScreen::_getInstance))},
	{"_getScaleFactor", "(J)F", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<float(*)(int64_t)>(&SplashScreen::_getScaleFactor))},
	{"_isVisible", "(J)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t)>(&SplashScreen::_isVisible))},
	{"_setImageData", "(J[B)Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)(int64_t,$bytes*)>(&SplashScreen::_setImageData))},
	{"_update", "(J[IIIIII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,$ints*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&SplashScreen::_update))},
	{"checkVisible", "()V", nullptr, $PRIVATE, $method(static_cast<void(SplashScreen::*)()>(&SplashScreen::checkVisible))},
	{"close", "()V", nullptr, $PUBLIC, $method(static_cast<void(SplashScreen::*)()>(&SplashScreen::close)), "java.lang.IllegalStateException"},
	{"createGraphics", "()Ljava/awt/Graphics2D;", nullptr, $PUBLIC, $method(static_cast<$Graphics2D*(SplashScreen::*)()>(&SplashScreen::createGraphics)), "java.lang.IllegalStateException"},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $method(static_cast<$Rectangle*(SplashScreen::*)()>(&SplashScreen::getBounds)), "java.lang.IllegalStateException"},
	{"getImageURL", "()Ljava/net/URL;", nullptr, $PUBLIC, $method(static_cast<$URL*(SplashScreen::*)()>(&SplashScreen::getImageURL)), "java.lang.IllegalStateException"},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $method(static_cast<$Dimension*(SplashScreen::*)()>(&SplashScreen::getSize)), "java.lang.IllegalStateException"},
	{"getSplashScreen", "()Ljava/awt/SplashScreen;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SplashScreen*(*)()>(&SplashScreen::getSplashScreen))},
	{"isVisible", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(SplashScreen::*)()>(&SplashScreen::isVisible))},
	{"markClosed", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&SplashScreen::markClosed))},
	{"setImageURL", "(Ljava/net/URL;)V", nullptr, $PUBLIC, $method(static_cast<void(SplashScreen::*)($URL*)>(&SplashScreen::setImageURL)), "java.lang.NullPointerException,java.io.IOException,java.lang.IllegalStateException"},
	{"update", "()V", nullptr, $PUBLIC, $method(static_cast<void(SplashScreen::*)()>(&SplashScreen::update)), "java.lang.IllegalStateException"},
	{}
};

#define _METHOD_INDEX__close 1
#define _METHOD_INDEX__getBounds 2
#define _METHOD_INDEX__getImageFileName 3
#define _METHOD_INDEX__getImageJarName 4
#define _METHOD_INDEX__getInstance 5
#define _METHOD_INDEX__getScaleFactor 6
#define _METHOD_INDEX__isVisible 7
#define _METHOD_INDEX__setImageData 8
#define _METHOD_INDEX__update 9

$InnerClassInfo _SplashScreen_InnerClassesInfo_[] = {
	{"java.awt.SplashScreen$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SplashScreen_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.SplashScreen",
	"java.lang.Object",
	nullptr,
	_SplashScreen_FieldInfo_,
	_SplashScreen_MethodInfo_,
	nullptr,
	nullptr,
	_SplashScreen_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.SplashScreen$1"
};

$Object* allocate$SplashScreen($Class* clazz) {
	return $of($alloc(SplashScreen));
}

bool SplashScreen::$assertionsDisabled = false;
bool SplashScreen::wasClosed = false;

SplashScreen* SplashScreen::theInstance = nullptr;
$PlatformLogger* SplashScreen::log = nullptr;

void SplashScreen::init$(int64_t ptr) {
	this->splashPtr = ptr;
}

SplashScreen* SplashScreen::getSplashScreen() {
	$init(SplashScreen);
	$beforeCallerSensitive();
	$synchronized(SplashScreen::class$) {
		if ($GraphicsEnvironment::isHeadless()) {
			$throwNew($HeadlessException);
		}
		if (!SplashScreen::wasClosed && SplashScreen::theInstance == nullptr) {
			$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($SplashScreen$1)));
			int64_t ptr = _getInstance();
			if (ptr != 0 && _isVisible(ptr)) {
				$assignStatic(SplashScreen::theInstance, $new(SplashScreen, ptr));
			}
		}
		return SplashScreen::theInstance;
	}
}

void SplashScreen::setImageURL($URL* imageURL) {
	$useLocalCurrentObjectStackCache();
	checkVisible();
	$var($URLConnection, connection, $nc(imageURL)->openConnection());
	$nc(connection)->connect();
	int32_t length = connection->getContentLength();
	$var($InputStream, stream, connection->getInputStream());
	$var($bytes, buf, $new($bytes, length));
	int32_t off = 0;
	while (true) {
		int32_t available = $nc(stream)->available();
		if (available <= 0) {
			available = 1;
		}
		if (off + available > length) {
			length = off * 2;
			if (off + available > length) {
				length = available + off;
			}
			$var($bytes, oldBuf, buf);
			$assign(buf, $new($bytes, length));
			$System::arraycopy(oldBuf, 0, buf, 0, off);
		}
		int32_t result = stream->read(buf, off, available);
		if (result < 0) {
			break;
		}
		off += result;
	}
	$synchronized(SplashScreen::class$) {
		checkVisible();
		if (!_setImageData(this->splashPtr, buf)) {
			$throwNew($IOException, "Bad image format or i/o error when loading image"_s);
		}
		$set(this, imageURL, imageURL);
	}
}

void SplashScreen::checkVisible() {
	if (!isVisible()) {
		$throwNew($IllegalStateException, "no splash screen available"_s);
	}
}

$URL* SplashScreen::getImageURL() {
	$useLocalCurrentObjectStackCache();
	$synchronized(SplashScreen::class$) {
		checkVisible();
		if (this->imageURL == nullptr) {
			try {
				$var($String, fileName, _getImageFileName(this->splashPtr));
				$var($String, jarName, _getImageJarName(this->splashPtr));
				if (fileName != nullptr) {
					if (jarName != nullptr) {
						$set(this, imageURL, $new($URL, $$str({"jar:"_s, ($($nc($($$new($File, jarName)->toURL()))->toString())), "!/"_s, fileName})));
					} else {
						$set(this, imageURL, $$new($File, fileName)->toURL());
					}
				}
			} catch ($MalformedURLException&) {
				$var($MalformedURLException, e, $catch());
				$init($PlatformLogger$Level);
				if ($nc(SplashScreen::log)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc(SplashScreen::log)->fine("MalformedURLException caught in the getImageURL() method"_s, static_cast<$Throwable*>(e));
				}
			}
		}
		return this->imageURL;
	}
}

$Rectangle* SplashScreen::getBounds() {
	$synchronized(SplashScreen::class$) {
		checkVisible();
		float scale = _getScaleFactor(this->splashPtr);
		$var($Rectangle, bounds, _getBounds(this->splashPtr));
		if (!SplashScreen::$assertionsDisabled && !(scale > 0)) {
			$throwNew($AssertionError);
		}
		if (scale > 0 && scale != 1) {
			int32_t var$0 = $cast(int32_t, (bounds->getWidth() / scale));
			$nc(bounds)->setSize(var$0, $cast(int32_t, (bounds->getHeight() / scale)));
		}
		return bounds;
	}
}

$Dimension* SplashScreen::getSize() {
	return $nc($(getBounds()))->getSize();
}

$Graphics2D* SplashScreen::createGraphics() {
	$useLocalCurrentObjectStackCache();
	$synchronized(SplashScreen::class$) {
		checkVisible();
		if (this->image == nullptr) {
			$var($Dimension, dim, $nc($(_getBounds(this->splashPtr)))->getSize());
			$set(this, image, $new($BufferedImage, $nc(dim)->width, dim->height, $BufferedImage::TYPE_INT_ARGB));
		}
		float scale = _getScaleFactor(this->splashPtr);
		$var($Graphics2D, g, $nc(this->image)->createGraphics());
		if (!SplashScreen::$assertionsDisabled && !(scale > 0)) {
			$throwNew($AssertionError);
		}
		if (scale <= 0) {
			scale = (float)1;
		}
		$nc(g)->scale(scale, scale);
		return g;
	}
}

void SplashScreen::update() {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, image, nullptr);
	$synchronized(SplashScreen::class$) {
		checkVisible();
		$assign(image, this->image);
	}
	if (image == nullptr) {
		$throwNew($IllegalStateException, "no overlay image available"_s);
	}
	$var($DataBuffer, buf, $nc($($nc(image)->getRaster()))->getDataBuffer());
	if (!($instanceOf($DataBufferInt, buf))) {
		$throwNew($AssertionError, $of($$str({"Overlay image DataBuffer is of invalid type == "_s, $($nc($of(buf))->getClass()->getName())})));
	}
	int32_t numBanks = $nc(buf)->getNumBanks();
	if (numBanks != 1) {
		$throwNew($AssertionError, $of($$str({"Invalid number of banks =="_s, $$str(numBanks), " in overlay image DataBuffer"_s})));
	}
	if (!($instanceOf($SinglePixelPackedSampleModel, $(image->getSampleModel())))) {
		$throwNew($AssertionError, $of($$str({"Overlay image has invalid sample model == "_s, $($nc($of($(image->getSampleModel())))->getClass()->getName())})));
	}
	$var($SinglePixelPackedSampleModel, sm, $cast($SinglePixelPackedSampleModel, image->getSampleModel()));
	int32_t scanlineStride = $nc(sm)->getScanlineStride();
	$var($Rectangle, rect, $nc($(image->getRaster()))->getBounds());
	$var($ints, data, $SunWritableRaster::stealData($cast($DataBufferInt, buf), 0));
	$synchronized(SplashScreen::class$) {
		checkVisible();
		_update(this->splashPtr, data, $nc(rect)->x, rect->y, rect->width, rect->height, scanlineStride);
	}
}

void SplashScreen::close() {
	$synchronized(SplashScreen::class$) {
		checkVisible();
		_close(this->splashPtr);
		$set(this, image, nullptr);
		SplashScreen::markClosed();
	}
}

void SplashScreen::markClosed() {
	$init(SplashScreen);
	$synchronized(SplashScreen::class$) {
		SplashScreen::wasClosed = true;
		$assignStatic(SplashScreen::theInstance, nullptr);
	}
}

bool SplashScreen::isVisible() {
	$synchronized(SplashScreen::class$) {
		return !SplashScreen::wasClosed && _isVisible(this->splashPtr);
	}
}

void SplashScreen::_update(int64_t splashPtr, $ints* data, int32_t x, int32_t y, int32_t width, int32_t height, int32_t scanlineStride) {
	$init(SplashScreen);
	$prepareNativeStatic(SplashScreen, _update, void, int64_t splashPtr, $ints* data, int32_t x, int32_t y, int32_t width, int32_t height, int32_t scanlineStride);
	$invokeNativeStatic(SplashScreen, _update, splashPtr, data, x, y, width, height, scanlineStride);
	$finishNativeStatic();
}

bool SplashScreen::_isVisible(int64_t splashPtr) {
	$init(SplashScreen);
	bool $ret = false;
	$prepareNativeStatic(SplashScreen, _isVisible, bool, int64_t splashPtr);
	$ret = $invokeNativeStatic(SplashScreen, _isVisible, splashPtr);
	$finishNativeStatic();
	return $ret;
}

$Rectangle* SplashScreen::_getBounds(int64_t splashPtr) {
	$init(SplashScreen);
	$var($Rectangle, $ret, nullptr);
	$prepareNativeStatic(SplashScreen, _getBounds, $Rectangle*, int64_t splashPtr);
	$assign($ret, $invokeNativeStatic(SplashScreen, _getBounds, splashPtr));
	$finishNativeStatic();
	return $ret;
}

int64_t SplashScreen::_getInstance() {
	$init(SplashScreen);
	int64_t $ret = 0;
	$prepareNativeStatic(SplashScreen, _getInstance, int64_t);
	$ret = $invokeNativeStatic(SplashScreen, _getInstance);
	$finishNativeStatic();
	return $ret;
}

void SplashScreen::_close(int64_t splashPtr) {
	$init(SplashScreen);
	$prepareNativeStatic(SplashScreen, _close, void, int64_t splashPtr);
	$invokeNativeStatic(SplashScreen, _close, splashPtr);
	$finishNativeStatic();
}

$String* SplashScreen::_getImageFileName(int64_t splashPtr) {
	$init(SplashScreen);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(SplashScreen, _getImageFileName, $String*, int64_t splashPtr);
	$assign($ret, $invokeNativeStatic(SplashScreen, _getImageFileName, splashPtr));
	$finishNativeStatic();
	return $ret;
}

$String* SplashScreen::_getImageJarName(int64_t SplashPtr) {
	$init(SplashScreen);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(SplashScreen, _getImageJarName, $String*, int64_t SplashPtr);
	$assign($ret, $invokeNativeStatic(SplashScreen, _getImageJarName, SplashPtr));
	$finishNativeStatic();
	return $ret;
}

bool SplashScreen::_setImageData(int64_t SplashPtr, $bytes* data) {
	$init(SplashScreen);
	bool $ret = false;
	$prepareNativeStatic(SplashScreen, _setImageData, bool, int64_t SplashPtr, $bytes* data);
	$ret = $invokeNativeStatic(SplashScreen, _setImageData, SplashPtr, data);
	$finishNativeStatic();
	return $ret;
}

float SplashScreen::_getScaleFactor(int64_t SplashPtr) {
	$init(SplashScreen);
	float $ret = 0.0;
	$prepareNativeStatic(SplashScreen, _getScaleFactor, float, int64_t SplashPtr);
	$ret = $invokeNativeStatic(SplashScreen, _getScaleFactor, SplashPtr);
	$finishNativeStatic();
	return $ret;
}

void clinit$SplashScreen($Class* class$) {
	SplashScreen::$assertionsDisabled = !SplashScreen::class$->desiredAssertionStatus();
	SplashScreen::wasClosed = false;
	$assignStatic(SplashScreen::theInstance, nullptr);
	$assignStatic(SplashScreen::log, $PlatformLogger::getLogger("java.awt.SplashScreen"_s));
}

SplashScreen::SplashScreen() {
}

$Class* SplashScreen::load$($String* name, bool initialize) {
	$loadClass(SplashScreen, name, initialize, &_SplashScreen_ClassInfo_, clinit$SplashScreen, allocate$SplashScreen);
	return class$;
}

$Class* SplashScreen::class$ = nullptr;

	} // awt
} // java