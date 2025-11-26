#include <com/sun/imageio/plugins/tiff/TIFFNullDecompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <java/io/EOFException.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

using $TIFFDecompressor = ::com::sun::imageio::plugins::tiff::TIFFDecompressor;
using $EOFException = ::java::io::EOFException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFNullDecompressor_FieldInfo_[] = {
	{"isReadActiveOnly", "Z", nullptr, $PRIVATE, $field(TIFFNullDecompressor, isReadActiveOnly)},
	{"originalSrcMinX", "I", nullptr, $PRIVATE, $field(TIFFNullDecompressor, originalSrcMinX)},
	{"originalSrcMinY", "I", nullptr, $PRIVATE, $field(TIFFNullDecompressor, originalSrcMinY)},
	{"originalSrcWidth", "I", nullptr, $PRIVATE, $field(TIFFNullDecompressor, originalSrcWidth)},
	{"originalSrcHeight", "I", nullptr, $PRIVATE, $field(TIFFNullDecompressor, originalSrcHeight)},
	{}
};

$MethodInfo _TIFFNullDecompressor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFNullDecompressor::*)()>(&TIFFNullDecompressor::init$))},
	{"beginDecoding", "()V", nullptr, $PUBLIC},
	{"decode", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"decodeRaw", "([BIII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _TIFFNullDecompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFNullDecompressor",
	"com.sun.imageio.plugins.tiff.TIFFDecompressor",
	nullptr,
	_TIFFNullDecompressor_FieldInfo_,
	_TIFFNullDecompressor_MethodInfo_
};

$Object* allocate$TIFFNullDecompressor($Class* clazz) {
	return $of($alloc(TIFFNullDecompressor));
}

void TIFFNullDecompressor::init$() {
	$TIFFDecompressor::init$();
	this->isReadActiveOnly = false;
}

void TIFFNullDecompressor::beginDecoding() {
	int32_t bitsPerPixel = 0;
	for (int32_t i = 0; i < $nc(this->bitsPerSample)->length; ++i) {
		bitsPerPixel += $nc(this->bitsPerSample)->get(i);
	}
	if ((this->activeSrcMinX != this->srcMinX || this->activeSrcMinY != this->srcMinY || this->activeSrcWidth != this->srcWidth || this->activeSrcHeight != this->srcHeight) && ((this->activeSrcMinX - this->srcMinX) * bitsPerPixel) % 8 == 0) {
		this->isReadActiveOnly = true;
		this->originalSrcMinX = this->srcMinX;
		this->originalSrcMinY = this->srcMinY;
		this->originalSrcWidth = this->srcWidth;
		this->originalSrcHeight = this->srcHeight;
		this->srcMinX = this->activeSrcMinX;
		this->srcMinY = this->activeSrcMinY;
		this->srcWidth = this->activeSrcWidth;
		this->srcHeight = this->activeSrcHeight;
	} else {
		this->isReadActiveOnly = false;
	}
	$TIFFDecompressor::beginDecoding();
}

void TIFFNullDecompressor::decode() {
	$TIFFDecompressor::decode();
	if (this->isReadActiveOnly) {
		this->srcMinX = this->originalSrcMinX;
		this->srcMinY = this->originalSrcMinY;
		this->srcWidth = this->originalSrcWidth;
		this->srcHeight = this->originalSrcHeight;
		this->isReadActiveOnly = false;
	}
}

void TIFFNullDecompressor::decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) {
	if (this->isReadActiveOnly) {
		int32_t activeBytesPerRow = (this->activeSrcWidth * bitsPerPixel + 7) / 8;
		int32_t totalBytesPerRow = (this->originalSrcWidth * bitsPerPixel + 7) / 8;
		int32_t bytesToSkipPerRow = totalBytesPerRow - activeBytesPerRow;
		$nc(this->stream)->seek(this->offset + (this->activeSrcMinY - this->originalSrcMinY) * totalBytesPerRow + ((this->activeSrcMinX - this->originalSrcMinX) * bitsPerPixel) / 8);
		int32_t lastRow = this->activeSrcHeight - 1;
		for (int32_t y = 0; y < this->activeSrcHeight; ++y) {
			int32_t bytesRead = $nc(this->stream)->read(b, dstOffset, activeBytesPerRow);
			if (bytesRead < 0) {
				$throwNew($EOFException);
			} else if (bytesRead != activeBytesPerRow) {
				break;
			}
			dstOffset += scanlineStride;
			if (y != lastRow) {
				$nc(this->stream)->skipBytes(bytesToSkipPerRow);
			}
		}
	} else {
		$nc(this->stream)->seek(this->offset);
		int32_t bytesPerRow = (this->srcWidth * bitsPerPixel + 7) / 8;
		if (bytesPerRow == scanlineStride) {
			if ($nc(this->stream)->read(b, dstOffset, bytesPerRow * this->srcHeight) < 0) {
				$throwNew($EOFException);
			}
		} else {
			for (int32_t y = 0; y < this->srcHeight; ++y) {
				int32_t bytesRead = $nc(this->stream)->read(b, dstOffset, bytesPerRow);
				if (bytesRead < 0) {
					$throwNew($EOFException);
				} else if (bytesRead != bytesPerRow) {
					break;
				}
				dstOffset += scanlineStride;
			}
		}
	}
}

TIFFNullDecompressor::TIFFNullDecompressor() {
}

$Class* TIFFNullDecompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFNullDecompressor, name, initialize, &_TIFFNullDecompressor_ClassInfo_, allocate$TIFFNullDecompressor);
	return class$;
}

$Class* TIFFNullDecompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com