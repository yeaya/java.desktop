#include <javax/imageio/spi/IIORegistry.h>

#include <com/sun/imageio/plugins/bmp/BMPImageReaderSpi.h>
#include <com/sun/imageio/plugins/bmp/BMPImageWriterSpi.h>
#include <com/sun/imageio/plugins/gif/GIFImageReaderSpi.h>
#include <com/sun/imageio/plugins/gif/GIFImageWriterSpi.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReaderSpi.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriterSpi.h>
#include <com/sun/imageio/plugins/png/PNGImageReaderSpi.h>
#include <com/sun/imageio/plugins/png/PNGImageWriterSpi.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageReaderSpi.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageWriterSpi.h>
#include <com/sun/imageio/plugins/wbmp/WBMPImageReaderSpi.h>
#include <com/sun/imageio/plugins/wbmp/WBMPImageWriterSpi.h>
#include <com/sun/imageio/spi/FileImageInputStreamSpi.h>
#include <com/sun/imageio/spi/FileImageOutputStreamSpi.h>
#include <com/sun/imageio/spi/InputStreamImageInputStreamSpi.h>
#include <com/sun/imageio/spi/OutputStreamImageOutputStreamSpi.h>
#include <com/sun/imageio/spi/RAFImageInputStreamSpi.h>
#include <com/sun/imageio/spi/RAFImageOutputStreamSpi.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Vector.h>
#include <javax/imageio/spi/IIORegistry$1.h>
#include <javax/imageio/spi/IIOServiceProvider.h>
#include <javax/imageio/spi/ImageInputStreamSpi.h>
#include <javax/imageio/spi/ImageOutputStreamSpi.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/spi/ImageTranscoderSpi.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/spi/ServiceRegistry.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $BMPImageReaderSpi = ::com::sun::imageio::plugins::bmp::BMPImageReaderSpi;
using $BMPImageWriterSpi = ::com::sun::imageio::plugins::bmp::BMPImageWriterSpi;
using $GIFImageReaderSpi = ::com::sun::imageio::plugins::gif::GIFImageReaderSpi;
using $GIFImageWriterSpi = ::com::sun::imageio::plugins::gif::GIFImageWriterSpi;
using $JPEGImageReaderSpi = ::com::sun::imageio::plugins::jpeg::JPEGImageReaderSpi;
using $JPEGImageWriterSpi = ::com::sun::imageio::plugins::jpeg::JPEGImageWriterSpi;
using $PNGImageReaderSpi = ::com::sun::imageio::plugins::png::PNGImageReaderSpi;
using $PNGImageWriterSpi = ::com::sun::imageio::plugins::png::PNGImageWriterSpi;
using $TIFFImageReaderSpi = ::com::sun::imageio::plugins::tiff::TIFFImageReaderSpi;
using $TIFFImageWriterSpi = ::com::sun::imageio::plugins::tiff::TIFFImageWriterSpi;
using $WBMPImageReaderSpi = ::com::sun::imageio::plugins::wbmp::WBMPImageReaderSpi;
using $WBMPImageWriterSpi = ::com::sun::imageio::plugins::wbmp::WBMPImageWriterSpi;
using $FileImageInputStreamSpi = ::com::sun::imageio::spi::FileImageInputStreamSpi;
using $FileImageOutputStreamSpi = ::com::sun::imageio::spi::FileImageOutputStreamSpi;
using $InputStreamImageInputStreamSpi = ::com::sun::imageio::spi::InputStreamImageInputStreamSpi;
using $OutputStreamImageOutputStreamSpi = ::com::sun::imageio::spi::OutputStreamImageOutputStreamSpi;
using $RAFImageInputStreamSpi = ::com::sun::imageio::spi::RAFImageInputStreamSpi;
using $RAFImageOutputStreamSpi = ::com::sun::imageio::spi::RAFImageOutputStreamSpi;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Vector = ::java::util::Vector;
using $IIORegistry$1 = ::javax::imageio::spi::IIORegistry$1;
using $IIOServiceProvider = ::javax::imageio::spi::IIOServiceProvider;
using $ImageInputStreamSpi = ::javax::imageio::spi::ImageInputStreamSpi;
using $ImageOutputStreamSpi = ::javax::imageio::spi::ImageOutputStreamSpi;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageTranscoderSpi = ::javax::imageio::spi::ImageTranscoderSpi;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ServiceRegistry = ::javax::imageio::spi::ServiceRegistry;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace imageio {
		namespace spi {

$FieldInfo _IIORegistry_FieldInfo_[] = {
	{"initialCategories", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Class<*>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(IIORegistry, initialCategories)},
	{}
};

$MethodInfo _IIORegistry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IIORegistry::*)()>(&IIORegistry::init$))},
	{"getDefaultInstance", "()Ljavax/imageio/spi/IIORegistry;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IIORegistry*(*)()>(&IIORegistry::getDefaultInstance))},
	{"registerApplicationClasspathSpis", "()V", nullptr, $PUBLIC, $method(static_cast<void(IIORegistry::*)()>(&IIORegistry::registerApplicationClasspathSpis))},
	{"registerInstalledProviders", "()V", nullptr, $PRIVATE, $method(static_cast<void(IIORegistry::*)()>(&IIORegistry::registerInstalledProviders))},
	{"registerStandardSpis", "()V", nullptr, $PRIVATE, $method(static_cast<void(IIORegistry::*)()>(&IIORegistry::registerStandardSpis))},
	{}
};

$InnerClassInfo _IIORegistry_InnerClassesInfo_[] = {
	{"javax.imageio.spi.IIORegistry$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IIORegistry_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.imageio.spi.IIORegistry",
	"javax.imageio.spi.ServiceRegistry",
	nullptr,
	_IIORegistry_FieldInfo_,
	_IIORegistry_MethodInfo_,
	nullptr,
	nullptr,
	_IIORegistry_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.imageio.spi.IIORegistry$1"
};

$Object* allocate$IIORegistry($Class* clazz) {
	return $of($alloc(IIORegistry));
}


$Vector* IIORegistry::initialCategories = nullptr;

void IIORegistry::init$() {
	$ServiceRegistry::init$($($nc(IIORegistry::initialCategories)->iterator()));
	registerStandardSpis();
	registerApplicationClasspathSpis();
}

IIORegistry* IIORegistry::getDefaultInstance() {
	$init(IIORegistry);
	$var($AppContext, context, $AppContext::getAppContext());
	$var(IIORegistry, registry, $cast(IIORegistry, $nc(context)->get(IIORegistry::class$)));
	if (registry == nullptr) {
		$assign(registry, $new(IIORegistry));
		context->put(IIORegistry::class$, registry);
	}
	return registry;
}

void IIORegistry::registerStandardSpis() {
	registerServiceProvider($$new($GIFImageReaderSpi));
	registerServiceProvider($$new($GIFImageWriterSpi));
	registerServiceProvider($$new($BMPImageReaderSpi));
	registerServiceProvider($$new($BMPImageWriterSpi));
	registerServiceProvider($$new($WBMPImageReaderSpi));
	registerServiceProvider($$new($WBMPImageWriterSpi));
	registerServiceProvider($$new($TIFFImageReaderSpi));
	registerServiceProvider($$new($TIFFImageWriterSpi));
	registerServiceProvider($$new($PNGImageReaderSpi));
	registerServiceProvider($$new($PNGImageWriterSpi));
	registerServiceProvider($$new($JPEGImageReaderSpi));
	registerServiceProvider($$new($JPEGImageWriterSpi));
	registerServiceProvider($$new($FileImageInputStreamSpi));
	registerServiceProvider($$new($FileImageOutputStreamSpi));
	registerServiceProvider($$new($InputStreamImageInputStreamSpi));
	registerServiceProvider($$new($OutputStreamImageOutputStreamSpi));
	registerServiceProvider($$new($RAFImageInputStreamSpi));
	registerServiceProvider($$new($RAFImageOutputStreamSpi));
	registerInstalledProviders();
}

void IIORegistry::registerApplicationClasspathSpis() {
	$beforeCallerSensitive();
	$var($ClassLoader, loader, $($Thread::currentThread())->getContextClassLoader());
	$var($Iterator, categories, getCategories());
	while ($nc(categories)->hasNext()) {
		$Class* c = $cast($Class, categories->next());
		$var($Iterator, riter, $nc($($ServiceLoader::load(c, loader)))->iterator());
		while ($nc(riter)->hasNext()) {
			try {
				$var($IIOServiceProvider, r, $cast($IIOServiceProvider, riter->next()));
				registerServiceProvider(r);
			} catch ($ServiceConfigurationError&) {
				$var($ServiceConfigurationError, err, $catch());
				if ($System::getSecurityManager() != nullptr) {
					err->printStackTrace();
				} else {
					$throw(err);
				}
			}
		}
	}
}

void IIORegistry::registerInstalledProviders() {
	$beforeCallerSensitive();
	$var($PrivilegedAction, doRegistration, $new($IIORegistry$1, this));
	$AccessController::doPrivileged(doRegistration);
}

void clinit$IIORegistry($Class* class$) {
	$assignStatic(IIORegistry::initialCategories, $new($Vector, 5));
	{
		$load($ImageReaderSpi);
		$nc(IIORegistry::initialCategories)->add($ImageReaderSpi::class$);
		$load($ImageWriterSpi);
		$nc(IIORegistry::initialCategories)->add($ImageWriterSpi::class$);
		$load($ImageTranscoderSpi);
		$nc(IIORegistry::initialCategories)->add($ImageTranscoderSpi::class$);
		$load($ImageInputStreamSpi);
		$nc(IIORegistry::initialCategories)->add($ImageInputStreamSpi::class$);
		$load($ImageOutputStreamSpi);
		$nc(IIORegistry::initialCategories)->add($ImageOutputStreamSpi::class$);
	}
}

IIORegistry::IIORegistry() {
}

$Class* IIORegistry::load$($String* name, bool initialize) {
	$loadClass(IIORegistry, name, initialize, &_IIORegistry_ClassInfo_, clinit$IIORegistry, allocate$IIORegistry);
	return class$;
}

$Class* IIORegistry::class$ = nullptr;

		} // spi
	} // imageio
} // javax