#include <com/sun/imageio/plugins/tiff/TIFFDeflateDecompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <java/util/zip/DataFormatException.h>
#include <java/util/zip/Inflater.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

#undef PREDICTOR_HORIZONTAL_DIFFERENCING
#undef PREDICTOR_NONE

using $TIFFDecompressor = ::com::sun::imageio::plugins::tiff::TIFFDecompressor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DataFormatException = ::java::util::zip::DataFormatException;
using $Inflater = ::java::util::zip::Inflater;
using $IIOException = ::javax::imageio::IIOException;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFDeflateDecompressor_FieldInfo_[] = {
	{"inflater", "Ljava/util/zip/Inflater;", nullptr, 0, $field(TIFFDeflateDecompressor, inflater)},
	{"predictor", "I", nullptr, 0, $field(TIFFDeflateDecompressor, predictor)},
	{}
};

$MethodInfo _TIFFDeflateDecompressor_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFDeflateDecompressor::*)(int32_t)>(&TIFFDeflateDecompressor::init$)), "javax.imageio.IIOException"},
	{"decodeRaw", "([BIII)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _TIFFDeflateDecompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFDeflateDecompressor",
	"com.sun.imageio.plugins.tiff.TIFFDecompressor",
	nullptr,
	_TIFFDeflateDecompressor_FieldInfo_,
	_TIFFDeflateDecompressor_MethodInfo_
};

$Object* allocate$TIFFDeflateDecompressor($Class* clazz) {
	return $of($alloc(TIFFDeflateDecompressor));
}

void TIFFDeflateDecompressor::init$(int32_t predictor) {
	$TIFFDecompressor::init$();
	$set(this, inflater, nullptr);
	$set(this, inflater, $new($Inflater));
	if (predictor != $BaselineTIFFTagSet::PREDICTOR_NONE && predictor != $BaselineTIFFTagSet::PREDICTOR_HORIZONTAL_DIFFERENCING) {
		$throwNew($IIOException, "Illegal value for Predictor in TIFF file"_s);
	}
	this->predictor = predictor;
}

void TIFFDeflateDecompressor::decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->predictor == $BaselineTIFFTagSet::PREDICTOR_HORIZONTAL_DIFFERENCING) {
			int32_t len = $nc(this->bitsPerSample)->length;
			for (int32_t i = 0; i < len; ++i) {
				if ($nc(this->bitsPerSample)->get(i) != 8) {
					$throwNew($IIOException, $$str({$$str($nc(this->bitsPerSample)->get(i)), "-bit samples are not supported for Horizontal differencing Predictor"_s}));
				}
			}
		}
		$nc(this->stream)->seek(this->offset);
		$var($bytes, srcData, $new($bytes, this->byteCount));
		$nc(this->stream)->readFully(srcData);
		int32_t bytesPerRow = (this->srcWidth * bitsPerPixel + 7) / 8;
		$var($bytes, buf, nullptr);
		int32_t bufOffset = 0;
		if (bytesPerRow == scanlineStride) {
			$assign(buf, b);
			bufOffset = dstOffset;
		} else {
			$assign(buf, $new($bytes, bytesPerRow * this->srcHeight));
			bufOffset = 0;
		}
		$nc(this->inflater)->setInput(srcData);
		try {
			$nc(this->inflater)->inflate(buf, bufOffset, bytesPerRow * this->srcHeight);
		} catch ($DataFormatException& dfe) {
			$throwNew($IIOException, "Error inflating data"_s, dfe);
		}
		$nc(this->inflater)->reset();
		if (this->predictor == $BaselineTIFFTagSet::PREDICTOR_HORIZONTAL_DIFFERENCING) {
			int32_t step = this->planar || this->samplesPerPixel == 1 ? 1 : this->samplesPerPixel;
			int32_t samplesPerRow = step * this->srcWidth;
			int32_t off = bufOffset + step;
			for (int32_t j = 0; j < this->srcHeight; ++j) {
				int32_t count = off;
				for (int32_t i = step; i < samplesPerRow; ++i) {
					(*$nc(buf))[count] += buf->get(count - step);
					++count;
				}
				off += samplesPerRow;
			}
		}
		if (bytesPerRow != scanlineStride) {
			int32_t off = 0;
			for (int32_t y = 0; y < this->srcHeight; ++y) {
				$System::arraycopy(buf, off, b, dstOffset, bytesPerRow);
				off += bytesPerRow;
				dstOffset += scanlineStride;
			}
		}
	}
}

TIFFDeflateDecompressor::TIFFDeflateDecompressor() {
}

$Class* TIFFDeflateDecompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFDeflateDecompressor, name, initialize, &_TIFFDeflateDecompressor_ClassInfo_, allocate$TIFFDeflateDecompressor);
	return class$;
}

$Class* TIFFDeflateDecompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com