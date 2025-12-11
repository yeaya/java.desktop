#include <javax/imageio/spi/ImageReaderWriterSpi.h>

#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Module.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <javax/imageio/spi/IIOServiceProvider.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $IIOMetadataFormat = ::javax::imageio::metadata::IIOMetadataFormat;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $IIOServiceProvider = ::javax::imageio::spi::IIOServiceProvider;

namespace javax {
	namespace imageio {
		namespace spi {

class ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0 : public $PrivilegedAction {
	$class(ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(ImageReaderWriterSpi* inst, $String* className) {
		$set(this, inst$, inst);
		$set(this, className, className);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$getMetadataFormat$0(className));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0>());
	}
	ImageReaderWriterSpi* inst$ = nullptr;
	$String* className = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0, inst$)},
	{"className", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0, className)},
	{}
};
$MethodInfo ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0::methodInfos[3] = {
	{"<init>", "(Ljavax/imageio/spi/ImageReaderWriterSpi;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0::*)(ImageReaderWriterSpi*,$String*)>(&ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.imageio.spi.ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0::load$($String* name, bool initialize) {
	$loadClass(ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0::class$ = nullptr;

$FieldInfo _ImageReaderWriterSpi_FieldInfo_[] = {
	{"names", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(ImageReaderWriterSpi, names)},
	{"suffixes", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(ImageReaderWriterSpi, suffixes)},
	{"MIMETypes", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(ImageReaderWriterSpi, MIMETypes)},
	{"pluginClassName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ImageReaderWriterSpi, pluginClassName)},
	{"supportsStandardStreamMetadataFormat", "Z", nullptr, $PROTECTED, $field(ImageReaderWriterSpi, supportsStandardStreamMetadataFormat)},
	{"nativeStreamMetadataFormatName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ImageReaderWriterSpi, nativeStreamMetadataFormatName)},
	{"nativeStreamMetadataFormatClassName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ImageReaderWriterSpi, nativeStreamMetadataFormatClassName)},
	{"extraStreamMetadataFormatNames", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(ImageReaderWriterSpi, extraStreamMetadataFormatNames)},
	{"extraStreamMetadataFormatClassNames", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(ImageReaderWriterSpi, extraStreamMetadataFormatClassNames)},
	{"supportsStandardImageMetadataFormat", "Z", nullptr, $PROTECTED, $field(ImageReaderWriterSpi, supportsStandardImageMetadataFormat)},
	{"nativeImageMetadataFormatName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ImageReaderWriterSpi, nativeImageMetadataFormatName)},
	{"nativeImageMetadataFormatClassName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ImageReaderWriterSpi, nativeImageMetadataFormatClassName)},
	{"extraImageMetadataFormatNames", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(ImageReaderWriterSpi, extraImageMetadataFormatNames)},
	{"extraImageMetadataFormatClassNames", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(ImageReaderWriterSpi, extraImageMetadataFormatClassNames)},
	{}
};

$MethodInfo _ImageReaderWriterSpi_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageReaderWriterSpi::*)($String*,$String*,$StringArray*,$StringArray*,$StringArray*,$String*,bool,$String*,$String*,$StringArray*,$StringArray*,bool,$String*,$String*,$StringArray*,$StringArray*)>(&ImageReaderWriterSpi::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ImageReaderWriterSpi::*)()>(&ImageReaderWriterSpi::init$))},
	{"getExtraImageMetadataFormatNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getExtraStreamMetadataFormatNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileSuffixes", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFormatNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getImageMetadataFormat", "(Ljava/lang/String;)Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PUBLIC},
	{"getMIMETypes", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMetadataFormat", "(Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PRIVATE, $method(static_cast<$IIOMetadataFormat*(ImageReaderWriterSpi::*)($String*,bool,$String*,$String*,$StringArray*,$StringArray*)>(&ImageReaderWriterSpi::getMetadataFormat))},
	{"getMetadataFormatClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PRIVATE, $method(static_cast<$Class*(ImageReaderWriterSpi::*)($String*)>(&ImageReaderWriterSpi::getMetadataFormatClass))},
	{"getNativeImageMetadataFormatName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNativeStreamMetadataFormatName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPluginClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStreamMetadataFormat", "(Ljava/lang/String;)Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PUBLIC},
	{"isStandardImageMetadataFormatSupported", "()Z", nullptr, $PUBLIC},
	{"isStandardStreamMetadataFormatSupported", "()Z", nullptr, $PUBLIC},
	{"lambda$getMetadataFormat$0", "(Ljava/lang/String;)Ljava/lang/Class;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Class*(ImageReaderWriterSpi::*)($String*)>(&ImageReaderWriterSpi::lambda$getMetadataFormat$0))},
	{}
};

$ClassInfo _ImageReaderWriterSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.imageio.spi.ImageReaderWriterSpi",
	"javax.imageio.spi.IIOServiceProvider",
	nullptr,
	_ImageReaderWriterSpi_FieldInfo_,
	_ImageReaderWriterSpi_MethodInfo_
};

$Object* allocate$ImageReaderWriterSpi($Class* clazz) {
	return $of($alloc(ImageReaderWriterSpi));
}

void ImageReaderWriterSpi::init$($String* vendorName, $String* version, $StringArray* names, $StringArray* suffixes, $StringArray* MIMETypes, $String* pluginClassName, bool supportsStandardStreamMetadataFormat, $String* nativeStreamMetadataFormatName, $String* nativeStreamMetadataFormatClassName, $StringArray* extraStreamMetadataFormatNames, $StringArray* extraStreamMetadataFormatClassNames, bool supportsStandardImageMetadataFormat, $String* nativeImageMetadataFormatName, $String* nativeImageMetadataFormatClassName, $StringArray* extraImageMetadataFormatNames, $StringArray* extraImageMetadataFormatClassNames) {
	$IIOServiceProvider::init$(vendorName, version);
	$set(this, names, nullptr);
	$set(this, suffixes, nullptr);
	$set(this, MIMETypes, nullptr);
	$set(this, pluginClassName, nullptr);
	this->supportsStandardStreamMetadataFormat = false;
	$set(this, nativeStreamMetadataFormatName, nullptr);
	$set(this, nativeStreamMetadataFormatClassName, nullptr);
	$set(this, extraStreamMetadataFormatNames, nullptr);
	$set(this, extraStreamMetadataFormatClassNames, nullptr);
	this->supportsStandardImageMetadataFormat = false;
	$set(this, nativeImageMetadataFormatName, nullptr);
	$set(this, nativeImageMetadataFormatClassName, nullptr);
	$set(this, extraImageMetadataFormatNames, nullptr);
	$set(this, extraImageMetadataFormatClassNames, nullptr);
	if (names == nullptr) {
		$throwNew($IllegalArgumentException, "names == null!"_s);
	}
	if ($nc(names)->length == 0) {
		$throwNew($IllegalArgumentException, "names.length == 0!"_s);
	}
	if (pluginClassName == nullptr) {
		$throwNew($IllegalArgumentException, "pluginClassName == null!"_s);
	}
	$set(this, names, $cast($StringArray, $nc(names)->clone()));
	if (suffixes != nullptr && suffixes->length > 0) {
		$set(this, suffixes, $cast($StringArray, suffixes->clone()));
	}
	if (MIMETypes != nullptr && MIMETypes->length > 0) {
		$set(this, MIMETypes, $cast($StringArray, MIMETypes->clone()));
	}
	$set(this, pluginClassName, pluginClassName);
	this->supportsStandardStreamMetadataFormat = supportsStandardStreamMetadataFormat;
	$set(this, nativeStreamMetadataFormatName, nativeStreamMetadataFormatName);
	$set(this, nativeStreamMetadataFormatClassName, nativeStreamMetadataFormatClassName);
	if (extraStreamMetadataFormatNames != nullptr && extraStreamMetadataFormatNames->length > 0) {
		$set(this, extraStreamMetadataFormatNames, $cast($StringArray, extraStreamMetadataFormatNames->clone()));
	}
	if (extraStreamMetadataFormatClassNames != nullptr && extraStreamMetadataFormatClassNames->length > 0) {
		$set(this, extraStreamMetadataFormatClassNames, $cast($StringArray, extraStreamMetadataFormatClassNames->clone()));
	}
	this->supportsStandardImageMetadataFormat = supportsStandardImageMetadataFormat;
	$set(this, nativeImageMetadataFormatName, nativeImageMetadataFormatName);
	$set(this, nativeImageMetadataFormatClassName, nativeImageMetadataFormatClassName);
	if (extraImageMetadataFormatNames != nullptr && extraImageMetadataFormatNames->length > 0) {
		$set(this, extraImageMetadataFormatNames, $cast($StringArray, extraImageMetadataFormatNames->clone()));
	}
	if (extraImageMetadataFormatClassNames != nullptr && extraImageMetadataFormatClassNames->length > 0) {
		$set(this, extraImageMetadataFormatClassNames, $cast($StringArray, extraImageMetadataFormatClassNames->clone()));
	}
}

void ImageReaderWriterSpi::init$() {
	$IIOServiceProvider::init$();
	$set(this, names, nullptr);
	$set(this, suffixes, nullptr);
	$set(this, MIMETypes, nullptr);
	$set(this, pluginClassName, nullptr);
	this->supportsStandardStreamMetadataFormat = false;
	$set(this, nativeStreamMetadataFormatName, nullptr);
	$set(this, nativeStreamMetadataFormatClassName, nullptr);
	$set(this, extraStreamMetadataFormatNames, nullptr);
	$set(this, extraStreamMetadataFormatClassNames, nullptr);
	this->supportsStandardImageMetadataFormat = false;
	$set(this, nativeImageMetadataFormatName, nullptr);
	$set(this, nativeImageMetadataFormatClassName, nullptr);
	$set(this, extraImageMetadataFormatNames, nullptr);
	$set(this, extraImageMetadataFormatClassNames, nullptr);
}

$StringArray* ImageReaderWriterSpi::getFormatNames() {
	return $cast($StringArray, $nc(this->names)->clone());
}

$StringArray* ImageReaderWriterSpi::getFileSuffixes() {
	return this->suffixes == nullptr ? ($StringArray*)nullptr : $cast($StringArray, $nc(this->suffixes)->clone());
}

$StringArray* ImageReaderWriterSpi::getMIMETypes() {
	return this->MIMETypes == nullptr ? ($StringArray*)nullptr : $cast($StringArray, $nc(this->MIMETypes)->clone());
}

$String* ImageReaderWriterSpi::getPluginClassName() {
	return this->pluginClassName;
}

bool ImageReaderWriterSpi::isStandardStreamMetadataFormatSupported() {
	return this->supportsStandardStreamMetadataFormat;
}

$String* ImageReaderWriterSpi::getNativeStreamMetadataFormatName() {
	return this->nativeStreamMetadataFormatName;
}

$StringArray* ImageReaderWriterSpi::getExtraStreamMetadataFormatNames() {
	return this->extraStreamMetadataFormatNames == nullptr ? ($StringArray*)nullptr : $cast($StringArray, $nc(this->extraStreamMetadataFormatNames)->clone());
}

bool ImageReaderWriterSpi::isStandardImageMetadataFormatSupported() {
	return this->supportsStandardImageMetadataFormat;
}

$String* ImageReaderWriterSpi::getNativeImageMetadataFormatName() {
	return this->nativeImageMetadataFormatName;
}

$StringArray* ImageReaderWriterSpi::getExtraImageMetadataFormatNames() {
	return this->extraImageMetadataFormatNames == nullptr ? ($StringArray*)nullptr : $cast($StringArray, $nc(this->extraImageMetadataFormatNames)->clone());
}

$IIOMetadataFormat* ImageReaderWriterSpi::getStreamMetadataFormat($String* formatName) {
	return getMetadataFormat(formatName, this->supportsStandardStreamMetadataFormat, this->nativeStreamMetadataFormatName, this->nativeStreamMetadataFormatClassName, this->extraStreamMetadataFormatNames, this->extraStreamMetadataFormatClassNames);
}

$IIOMetadataFormat* ImageReaderWriterSpi::getImageMetadataFormat($String* formatName) {
	return getMetadataFormat(formatName, this->supportsStandardImageMetadataFormat, this->nativeImageMetadataFormatName, this->nativeImageMetadataFormatClassName, this->extraImageMetadataFormatNames, this->extraImageMetadataFormatClassNames);
}

$IIOMetadataFormat* ImageReaderWriterSpi::getMetadataFormat($String* formatName, bool supportsStandard, $String* nativeName, $String* nativeClassName, $StringArray* extraNames, $StringArray* extraClassNames) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (formatName == nullptr) {
		$throwNew($IllegalArgumentException, "formatName == null!"_s);
	}
	$init($IIOMetadataFormatImpl);
	if (supportsStandard && $nc(formatName)->equals($IIOMetadataFormatImpl::standardMetadataFormatName)) {
		return $IIOMetadataFormatImpl::getStandardFormatInstance();
	}
	$var($String, formatClassName, nullptr);
	if ($nc(formatName)->equals(nativeName)) {
		$assign(formatClassName, nativeClassName);
	} else if (extraNames != nullptr) {
		for (int32_t i = 0; i < extraNames->length; ++i) {
			if (formatName->equals(extraNames->get(i))) {
				$assign(formatClassName, $nc(extraClassNames)->get(i));
				break;
			}
		}
	}
	if (formatClassName == nullptr) {
		$throwNew($IllegalArgumentException, "Unsupported format name"_s);
	}
	try {
		$var($String, className, formatClassName);
		$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0, this, className)));
		$Class* cls = $cast($Class, $AccessController::doPrivileged(pa));
		$var($Method, meth, $nc(cls)->getMethod("getInstance"_s, $$new($ClassArray, 0)));
		return $cast($IIOMetadataFormat, $nc(meth)->invoke(nullptr, $$new($ObjectArray, 0)));
	} catch ($Exception& e) {
		$var($RuntimeException, ex, $new($IllegalStateException, "Can\'t obtain format"_s));
		ex->initCause(e);
		$throw(ex);
	}
	$shouldNotReachHere();
}

$Class* ImageReaderWriterSpi::getMetadataFormatClass($String* formatClassName) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Module, thisModule, ImageReaderWriterSpi::class$->getModule());
	$var($Module, targetModule, $of(this)->getClass()->getModule());
	$Class* c = nullptr;
	try {
		$var($ClassLoader, cl, $of(this)->getClass()->getClassLoader());
		c = $Class::forName(formatClassName, false, cl);
		$load($IIOMetadataFormat);
		if (!$IIOMetadataFormat::class$->isAssignableFrom(c)) {
			return nullptr;
		}
	} catch ($ClassNotFoundException& e) {
	}
	if ($nc($of(thisModule))->equals(targetModule) || c == nullptr) {
		return c;
	}
	if ($nc(targetModule)->isNamed()) {
		int32_t i = $nc(formatClassName)->lastIndexOf("."_s);
		$var($String, pn, i > 0 ? formatClassName->substring(0, i) : ""_s);
		if (!targetModule->isExported(pn, thisModule)) {
			$throwNew($IllegalStateException, $$str({"Class "_s, formatClassName, " in named module must be exported to java.desktop module."_s}));
		}
	}
	return c;
}

$Class* ImageReaderWriterSpi::lambda$getMetadataFormat$0($String* className) {
	return getMetadataFormatClass(className);
}

ImageReaderWriterSpi::ImageReaderWriterSpi() {
}

$Class* ImageReaderWriterSpi::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0::classInfo$.name)) {
			return ImageReaderWriterSpi$$Lambda$lambda$getMetadataFormat$0::load$(name, initialize);
		}
	}
	$loadClass(ImageReaderWriterSpi, name, initialize, &_ImageReaderWriterSpi_ClassInfo_, allocate$ImageReaderWriterSpi);
	return class$;
}

$Class* ImageReaderWriterSpi::class$ = nullptr;

		} // spi
	} // imageio
} // javax