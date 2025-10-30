#include <com/sun/imageio/plugins/tiff/TIFFJPEGCompressor$JPEGSPIFilter.h>

#include <com/sun/imageio/plugins/tiff/TIFFJPEGCompressor.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <jcpp.h>

using $TIFFJPEGCompressor = ::com::sun::imageio::plugins::tiff::TIFFJPEGCompressor;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageReaderWriterSpi = ::javax::imageio::spi::ImageReaderWriterSpi;
using $ServiceRegistry$Filter = ::javax::imageio::spi::ServiceRegistry$Filter;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$MethodInfo _TIFFJPEGCompressor$JPEGSPIFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TIFFJPEGCompressor$JPEGSPIFilter::*)()>(&TIFFJPEGCompressor$JPEGSPIFilter::init$))},
	{"filter", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TIFFJPEGCompressor$JPEGSPIFilter_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.tiff.TIFFJPEGCompressor$JPEGSPIFilter", "com.sun.imageio.plugins.tiff.TIFFJPEGCompressor", "JPEGSPIFilter", $PRIVATE | $STATIC},
	{"javax.imageio.spi.ServiceRegistry$Filter", "javax.imageio.spi.ServiceRegistry", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TIFFJPEGCompressor$JPEGSPIFilter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFJPEGCompressor$JPEGSPIFilter",
	"java.lang.Object",
	"javax.imageio.spi.ServiceRegistry$Filter",
	nullptr,
	_TIFFJPEGCompressor$JPEGSPIFilter_MethodInfo_,
	nullptr,
	nullptr,
	_TIFFJPEGCompressor$JPEGSPIFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.tiff.TIFFJPEGCompressor"
};

$Object* allocate$TIFFJPEGCompressor$JPEGSPIFilter($Class* clazz) {
	return $of($alloc(TIFFJPEGCompressor$JPEGSPIFilter));
}

void TIFFJPEGCompressor$JPEGSPIFilter::init$() {
}

bool TIFFJPEGCompressor$JPEGSPIFilter::filter(Object$* provider) {
	$useLocalCurrentObjectStackCache();
	$var($ImageReaderSpi, readerSPI, $cast($ImageReaderSpi, provider));
	if (readerSPI != nullptr) {
		$var($String, streamMetadataName, readerSPI->getNativeStreamMetadataFormatName());
		if (streamMetadataName != nullptr) {
			return streamMetadataName->equals("javax_imageio_jpeg_stream_1.0"_s);
		} else {
			return false;
		}
	}
	return false;
}

TIFFJPEGCompressor$JPEGSPIFilter::TIFFJPEGCompressor$JPEGSPIFilter() {
}

$Class* TIFFJPEGCompressor$JPEGSPIFilter::load$($String* name, bool initialize) {
	$loadClass(TIFFJPEGCompressor$JPEGSPIFilter, name, initialize, &_TIFFJPEGCompressor$JPEGSPIFilter_ClassInfo_, allocate$TIFFJPEGCompressor$JPEGSPIFilter);
	return class$;
}

$Class* TIFFJPEGCompressor$JPEGSPIFilter::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com