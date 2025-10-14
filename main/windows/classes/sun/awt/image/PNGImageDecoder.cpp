#include <sun/awt/image/PNGImageDecoder.h>

#include <java/awt/Color.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Date.h>
#include <java/util/GregorianCalendar.h>
#include <java/util/Hashtable.h>
#include <java/util/zip/Inflater.h>
#include <java/util/zip/InflaterInputStream.h>
#include <sun/awt/image/ImageDecoder.h>
#include <sun/awt/image/InputStreamImageSource.h>
#include <sun/awt/image/PNGFilterInputStream.h>
#include <sun/awt/image/PNGImageDecoder$Chromaticities.h>
#include <sun/awt/image/PNGImageDecoder$PNGException.h>
#include <jcpp.h>

#undef ALPHA
#undef COLOR
#undef COMPLETESCANLINES
#undef GRAY
#undef IMAGEERROR
#undef PALETTE
#undef SINGLEFRAME
#undef SINGLEPASS
#undef STATICIMAGEDONE
#undef T
#undef TOPDOWNLEFTRIGHT

using $ColorModelArray = $Array<::java::awt::image::ColorModel>;
using $Color = ::java::awt::Color;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $GregorianCalendar = ::java::util::GregorianCalendar;
using $Hashtable = ::java::util::Hashtable;
using $Inflater = ::java::util::zip::Inflater;
using $InflaterInputStream = ::java::util::zip::InflaterInputStream;
using $ImageDecoder = ::sun::awt::image::ImageDecoder;
using $InputStreamImageSource = ::sun::awt::image::InputStreamImageSource;
using $PNGFilterInputStream = ::sun::awt::image::PNGFilterInputStream;
using $PNGImageDecoder$Chromaticities = ::sun::awt::image::PNGImageDecoder$Chromaticities;
using $PNGImageDecoder$PNGException = ::sun::awt::image::PNGImageDecoder$PNGException;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _PNGImageDecoder_FieldInfo_[] = {
	{"GRAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, GRAY)},
	{"PALETTE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, PALETTE)},
	{"COLOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, COLOR)},
	{"ALPHA", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, ALPHA)},
	{"bKGDChunk", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, bKGDChunk)},
	{"cHRMChunk", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, cHRMChunk)},
	{"gAMAChunk", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, gAMAChunk)},
	{"hISTChunk", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, hISTChunk)},
	{"IDATChunk", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, IDATChunk)},
	{"IENDChunk", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, IENDChunk)},
	{"IHDRChunk", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, IHDRChunk)},
	{"PLTEChunk", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, PLTEChunk)},
	{"pHYsChunk", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, pHYsChunk)},
	{"sBITChunk", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, sBITChunk)},
	{"tEXtChunk", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, tEXtChunk)},
	{"tIMEChunk", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, tIMEChunk)},
	{"tRNSChunk", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, tRNSChunk)},
	{"zTXtChunk", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageDecoder, zTXtChunk)},
	{"width", "I", nullptr, $PRIVATE, $field(PNGImageDecoder, width)},
	{"height", "I", nullptr, $PRIVATE, $field(PNGImageDecoder, height)},
	{"bitDepth", "I", nullptr, $PRIVATE, $field(PNGImageDecoder, bitDepth)},
	{"colorType", "I", nullptr, $PRIVATE, $field(PNGImageDecoder, colorType)},
	{"compressionMethod", "I", nullptr, $PRIVATE, $field(PNGImageDecoder, compressionMethod)},
	{"filterMethod", "I", nullptr, $PRIVATE, $field(PNGImageDecoder, filterMethod)},
	{"interlaceMethod", "I", nullptr, $PRIVATE, $field(PNGImageDecoder, interlaceMethod)},
	{"gamma", "I", nullptr, $PRIVATE, $field(PNGImageDecoder, gamma)},
	{"properties", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(PNGImageDecoder, properties)},
	{"cm", "Ljava/awt/image/ColorModel;", nullptr, $PRIVATE, $field(PNGImageDecoder, cm)},
	{"red_map", "[B", nullptr, $PRIVATE, $field(PNGImageDecoder, red_map)},
	{"green_map", "[B", nullptr, $PRIVATE, $field(PNGImageDecoder, green_map)},
	{"blue_map", "[B", nullptr, $PRIVATE, $field(PNGImageDecoder, blue_map)},
	{"alpha_map", "[B", nullptr, $PRIVATE, $field(PNGImageDecoder, alpha_map)},
	{"transparentPixel", "I", nullptr, $PRIVATE, $field(PNGImageDecoder, transparentPixel)},
	{"transparentPixel_16", "[B", nullptr, $PRIVATE, $field(PNGImageDecoder, transparentPixel_16)},
	{"greyModels", "[Ljava/awt/image/ColorModel;", nullptr, $PRIVATE | $STATIC, $staticField(PNGImageDecoder, greyModels)},
	{"startingRow", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageDecoder, startingRow)},
	{"startingCol", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageDecoder, startingCol)},
	{"rowIncrement", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageDecoder, rowIncrement)},
	{"colIncrement", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageDecoder, colIncrement)},
	{"blockHeight", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageDecoder, blockHeight)},
	{"blockWidth", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageDecoder, blockWidth)},
	{"pos", "I", nullptr, 0, $field(PNGImageDecoder, pos)},
	{"limit", "I", nullptr, 0, $field(PNGImageDecoder, limit)},
	{"chunkStart", "I", nullptr, 0, $field(PNGImageDecoder, chunkStart)},
	{"chunkKey", "I", nullptr, 0, $field(PNGImageDecoder, chunkKey)},
	{"chunkLength", "I", nullptr, 0, $field(PNGImageDecoder, chunkLength)},
	{"chunkCRC", "I", nullptr, 0, $field(PNGImageDecoder, chunkCRC)},
	{"seenEOF", "Z", nullptr, 0, $field(PNGImageDecoder, seenEOF)},
	{"signature", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageDecoder, signature)},
	{"inputStream", "Lsun/awt/image/PNGFilterInputStream;", nullptr, 0, $field(PNGImageDecoder, inputStream)},
	{"underlyingInputStream", "Ljava/io/InputStream;", nullptr, 0, $field(PNGImageDecoder, underlyingInputStream)},
	{"inbuf", "[B", nullptr, 0, $field(PNGImageDecoder, inbuf)},
	{"checkCRC", "Z", nullptr, $PRIVATE | $STATIC, $staticField(PNGImageDecoder, checkCRC)},
	{"crc_table", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageDecoder, crc_table)},
	{}
};

$MethodInfo _PNGImageDecoder_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/InputStreamImageSource;Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(PNGImageDecoder::*)($InputStreamImageSource*,$InputStream*)>(&PNGImageDecoder::init$)), "java.io.IOException"},
	{"crc", "([BII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t)>(&PNGImageDecoder::crc))},
	{"fill", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageDecoder::*)()>(&PNGImageDecoder::fill)), "java.io.IOException"},
	{"filterRow", "([B[BIII)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageDecoder::*)($bytes*,$bytes*,int32_t,int32_t,int32_t)>(&PNGImageDecoder::filterRow)), "java.io.IOException"},
	{"getByte", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(PNGImageDecoder::*)(int32_t)>(&PNGImageDecoder::getByte))},
	{"getCheckCRC", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&PNGImageDecoder::getCheckCRC))},
	{"getChunk", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(PNGImageDecoder::*)()>(&PNGImageDecoder::getChunk)), "java.io.IOException"},
	{"getData", "()Z", nullptr, 0, nullptr, "java.io.IOException"},
	{"getInt", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(PNGImageDecoder::*)(int32_t)>(&PNGImageDecoder::getInt))},
	{"getShort", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(PNGImageDecoder::*)(int32_t)>(&PNGImageDecoder::getShort))},
	{"handleChunk", "(I[BII)Z", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"need", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(PNGImageDecoder::*)(int32_t)>(&PNGImageDecoder::need)), "java.io.IOException"},
	{"pngassert", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageDecoder::*)(bool)>(&PNGImageDecoder::pngassert)), "java.io.IOException"},
	{"print", "()V", nullptr, $PUBLIC},
	{"produceImage", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException,sun.awt.image.ImageFormatException"},
	{"property", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageDecoder::*)($String*,Object$*)>(&PNGImageDecoder::property))},
	{"property", "(Ljava/lang/String;F)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageDecoder::*)($String*,float)>(&PNGImageDecoder::property))},
	{"readAll", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageDecoder::*)()>(&PNGImageDecoder::readAll)), "java.io.IOException"},
	{"sendPixels", "(IIII[III)Z", nullptr, $PRIVATE, $method(static_cast<bool(PNGImageDecoder::*)(int32_t,int32_t,int32_t,int32_t,$ints*,int32_t,int32_t)>(&PNGImageDecoder::sendPixels))},
	{"sendPixels", "(IIII[BII)Z", nullptr, $PRIVATE, $method(static_cast<bool(PNGImageDecoder::*)(int32_t,int32_t,int32_t,int32_t,$bytes*,int32_t,int32_t)>(&PNGImageDecoder::sendPixels))},
	{"setCheckCRC", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&PNGImageDecoder::setCheckCRC))},
	{"update_crc", "(I[BII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,$bytes*,int32_t,int32_t)>(&PNGImageDecoder::update_crc))},
	{"wrc", "(I)V", nullptr, $PROTECTED},
	{"wrk", "(I)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _PNGImageDecoder_InnerClassesInfo_[] = {
	{"sun.awt.image.PNGImageDecoder$Chromaticities", "sun.awt.image.PNGImageDecoder", "Chromaticities", $PUBLIC | $STATIC},
	{"sun.awt.image.PNGImageDecoder$PNGException", "sun.awt.image.PNGImageDecoder", "PNGException", $PUBLIC},
	{}
};

$ClassInfo _PNGImageDecoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PNGImageDecoder",
	"sun.awt.image.ImageDecoder",
	nullptr,
	_PNGImageDecoder_FieldInfo_,
	_PNGImageDecoder_MethodInfo_,
	nullptr,
	nullptr,
	_PNGImageDecoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.image.PNGImageDecoder$Chromaticities,sun.awt.image.PNGImageDecoder$PNGException"
};

$Object* allocate$PNGImageDecoder($Class* clazz) {
	return $of($alloc(PNGImageDecoder));
}

$ColorModelArray* PNGImageDecoder::greyModels = nullptr;
$bytes* PNGImageDecoder::startingRow = nullptr;
$bytes* PNGImageDecoder::startingCol = nullptr;
$bytes* PNGImageDecoder::rowIncrement = nullptr;
$bytes* PNGImageDecoder::colIncrement = nullptr;
$bytes* PNGImageDecoder::blockHeight = nullptr;
$bytes* PNGImageDecoder::blockWidth = nullptr;
$bytes* PNGImageDecoder::signature = nullptr;
bool PNGImageDecoder::checkCRC = false;
$ints* PNGImageDecoder::crc_table = nullptr;

void PNGImageDecoder::property($String* key, Object$* value) {
	if (value == nullptr) {
		return;
	}
	if (this->properties == nullptr) {
		$set(this, properties, $new($Hashtable));
	}
	$nc(this->properties)->put(key, value);
}

void PNGImageDecoder::property($String* key, float value) {
	property(key, $($of($Float::valueOf(value))));
}

void PNGImageDecoder::pngassert(bool b) {
	if (!b) {
		$var($PNGImageDecoder$PNGException, e, $new($PNGImageDecoder$PNGException, this, "Broken file"_s));
		e->printStackTrace();
		$throw(e);
	}
}

bool PNGImageDecoder::handleChunk(int32_t key, $bytes* buf, int32_t st, int32_t len) {
	{
		$var($Color, c, nullptr)
		int32_t klen = 0;
		switch (key) {
		case PNGImageDecoder::bKGDChunk:
			{
				$assign(c, nullptr);
				{
					int32_t ix = 0;
					int32_t t = 0;
					do {
						if (this->colorType == PNGImageDecoder::COLOR) {
							goto case$0;
						}
						if (this->colorType == (PNGImageDecoder::COLOR | PNGImageDecoder::ALPHA)) {
							goto case$1;
						}
						if (this->colorType == (PNGImageDecoder::COLOR | PNGImageDecoder::PALETTE)) {
							goto case$2;
						}
						if (this->colorType == ((PNGImageDecoder::COLOR | PNGImageDecoder::PALETTE) | PNGImageDecoder::ALPHA)) {
							goto case$3;
						}
						if (this->colorType == PNGImageDecoder::GRAY) {
							goto case$4;
						}
						if (this->colorType == (PNGImageDecoder::GRAY | PNGImageDecoder::ALPHA)) {
							goto case$5;
						}
						break;
case$0:
						// COLOR
						{
						}
case$1:
						// COLOR | ALPHA
						{
							pngassert(len == 6);
							$assign(c, $new($Color, (int32_t)($nc(buf)->get(st) & (uint32_t)255), (int32_t)(buf->get(st + 2) & (uint32_t)255), (int32_t)(buf->get(st + 4) & (uint32_t)255)));
							break;
						}
case$2:
						// COLOR | PALETTE
						{
						}
case$3:
						// COLOR | PALETTE | ALPHA
						{
							pngassert(len == 1);
							ix = (int32_t)($nc(buf)->get(st) & (uint32_t)255);
							pngassert(this->red_map != nullptr && ix < $nc(this->red_map)->length);
							$assign(c, $new($Color, (int32_t)($nc(this->red_map)->get(ix) & (uint32_t)255), (int32_t)($nc(this->green_map)->get(ix) & (uint32_t)255), (int32_t)($nc(this->blue_map)->get(ix) & (uint32_t)255)));
							break;
						}
case$4:
						// GRAY
						{
						}
case$5:
						// GRAY | ALPHA
						{
							pngassert(len == 2);
							t = (int32_t)(buf->get(st) & (uint32_t)255);
							$assign(c, $new($Color, t, t, t));
							break;
						}
					} while (false);
				}
				if (c != nullptr) {
					property("background"_s, $of(c));
				}
				break;
			}
		case PNGImageDecoder::cHRMChunk:
			{
				int32_t var$0 = getInt(st);
				int32_t var$1 = getInt(st + 4);
				int32_t var$2 = getInt(st + 8);
				int32_t var$3 = getInt(st + 12);
				int32_t var$4 = getInt(st + 16);
				int32_t var$5 = getInt(st + 20);
				int32_t var$6 = getInt(st + 24);
				property("chromaticities"_s, $of($$new($PNGImageDecoder$Chromaticities, var$0, var$1, var$2, var$3, var$4, var$5, var$6, getInt(st + 28))));
				break;
			}
		case PNGImageDecoder::gAMAChunk:
			{
				if (len != 4) {
					$throwNew($PNGImageDecoder$PNGException, this, "bogus gAMA"_s);
				}
				this->gamma = getInt(st);
				if (this->gamma != 0x000186A0) {
					property("gamma"_s, this->gamma / 100000.0f);
				}
				break;
			}
		case PNGImageDecoder::hISTChunk:
			{
				break;
			}
		case PNGImageDecoder::IDATChunk:
			{
				return false;
			}
		case PNGImageDecoder::IENDChunk:
			{
				break;
			}
		case PNGImageDecoder::IHDRChunk:
			{
				bool var$7 = len != 13 || (this->width = getInt(st)) == 0;
				if (var$7 || (this->height = getInt(st + 4)) == 0) {
					$throwNew($PNGImageDecoder$PNGException, this, "bogus IHDR"_s);
				}
				this->bitDepth = getByte(st + 8);
				this->colorType = getByte(st + 9);
				this->compressionMethod = getByte(st + 10);
				this->filterMethod = getByte(st + 11);
				this->interlaceMethod = getByte(st + 12);
				break;
			}
		case PNGImageDecoder::PLTEChunk:
			{
				{
					int32_t tsize = len / 3;
					$set(this, red_map, $new($bytes, tsize));
					$set(this, green_map, $new($bytes, tsize));
					$set(this, blue_map, $new($bytes, tsize));
					{
						int32_t i = 0;
						int32_t j = st;
						for (; i < tsize; ++i, j += 3) {
							$nc(this->red_map)->set(i, $nc(buf)->get(j));
							$nc(this->green_map)->set(i, buf->get(j + 1));
							$nc(this->blue_map)->set(i, buf->get(j + 2));
						}
					}
				}
				break;
			}
		case PNGImageDecoder::pHYsChunk:
			{
				break;
			}
		case PNGImageDecoder::sBITChunk:
			{
				break;
			}
		case PNGImageDecoder::tEXtChunk:
			{
				klen = 0;
				while (klen < len && $nc(buf)->get(st + klen) != 0) {
					++klen;
				}
				if (klen < len) {
					$var($String, tkey, $new($String, buf, st, klen));
					$var($String, tvalue, $new($String, buf, st + klen + 1, len - klen - 1));
					property(tkey, $of(tvalue));
				}
				break;
			}
		case PNGImageDecoder::tIMEChunk:
			{
				int32_t var$8 = getShort(st + 0);
				int32_t var$9 = getByte(st + 2) - 1;
				int32_t var$10 = getByte(st + 3);
				int32_t var$11 = getByte(st + 4);
				int32_t var$12 = getByte(st + 5);
				property("modtime"_s, $($of($$new($GregorianCalendar, var$8, var$9, var$10, var$11, var$12, getByte(st + 6))->getTime())));
				break;
			}
		case PNGImageDecoder::tRNSChunk:
			{
				{
					int32_t alen = 0;
					int32_t t = 0;
					do {
						if (this->colorType == (PNGImageDecoder::PALETTE | PNGImageDecoder::COLOR)) {
							goto case$6;
						}
						if (this->colorType == ((PNGImageDecoder::PALETTE | PNGImageDecoder::COLOR) | PNGImageDecoder::ALPHA)) {
							goto case$7;
						}
						if (this->colorType == PNGImageDecoder::COLOR) {
							goto case$8;
						}
						if (this->colorType == (PNGImageDecoder::COLOR | PNGImageDecoder::ALPHA)) {
							goto case$9;
						}
						if (this->colorType == PNGImageDecoder::GRAY) {
							goto case$10;
						}
						if (this->colorType == (PNGImageDecoder::GRAY | PNGImageDecoder::ALPHA)) {
							goto case$11;
						}
						break;
case$6:
						// PALETTE | COLOR
						{
						}
case$7:
						// PALETTE | COLOR | ALPHA
						{
							alen = len;
							if (this->red_map != nullptr) {
								alen = $nc(this->red_map)->length;
							}
							$set(this, alpha_map, $new($bytes, alen));
							$System::arraycopy(buf, st, this->alpha_map, 0, len < alen ? len : alen);
							while (--alen >= len) {
								$nc(this->alpha_map)->set(alen, (int8_t)255);
							}
							break;
						}
case$8:
						// COLOR
						{
						}
case$9:
						// COLOR | ALPHA
						{
							pngassert(len == 6);
							if (this->bitDepth == 16) {
								$set(this, transparentPixel_16, $new($bytes, 6));
								for (int32_t i = 0; i < 6; ++i) {
									$nc(this->transparentPixel_16)->set(i, (int8_t)getByte(st + i));
								}
							} else {
								int32_t var$14 = (((int32_t)(getShort(st + 0) & (uint32_t)255)) << 16);
								int32_t var$13 = var$14 | (((int32_t)(getShort(st + 2) & (uint32_t)255)) << 8);
								this->transparentPixel = var$13 | ((int32_t)(getShort(st + 4) & (uint32_t)255));
							}
							break;
						}
case$10:
						// GRAY
						{
						}
case$11:
						// GRAY | ALPHA
						{
							pngassert(len == 2);
							t = getShort(st);
							t = (int32_t)(255 & (uint32_t)((this->bitDepth == 16) ? (t >> 8) : t));
							this->transparentPixel = ((t << 16) | (t << 8)) | t;
							break;
						}
					} while (false);
				}
				break;
			}
		case PNGImageDecoder::zTXtChunk:
			{
				break;
			}
		}
	}
	return true;
}

void PNGImageDecoder::produceImage() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				for (int32_t i = 0; i < $nc(PNGImageDecoder::signature)->length; ++i) {
					if (((int32_t)($nc(PNGImageDecoder::signature)->get(i) & (uint32_t)255)) != $nc(this->underlyingInputStream)->read()) {
						$throwNew($PNGImageDecoder$PNGException, this, "Chunk signature mismatch"_s);
					}
				}
				$var($InputStream, is, $new($BufferedInputStream, $$new($InflaterInputStream, this->inputStream, $$new($Inflater))));
				getData();
				$var($bytes, bPixels, nullptr);
				$var($ints, wPixels, nullptr);
				int32_t pixSize = this->width;
				int32_t rowStride = 0;
				int32_t logDepth = 0;
				switch (this->bitDepth) {
				case 1:
					{
						logDepth = 0;
						break;
					}
				case 2:
					{
						logDepth = 1;
						break;
					}
				case 4:
					{
						logDepth = 2;
						break;
					}
				case 8:
					{
						logDepth = 3;
						break;
					}
				case 16:
					{
						logDepth = 4;
						break;
					}
				default:
					{
						$throwNew($PNGImageDecoder$PNGException, this, "invalid depth"_s);
					}
				}
				if (this->interlaceMethod != 0) {
					pixSize *= this->height;
					rowStride = this->width;
				} else {
					rowStride = 0;
				}
				int32_t combinedType = this->colorType | (this->bitDepth << 3);
				int32_t bitMask = ($sl(1, this->bitDepth >= 8 ? 8 : this->bitDepth)) - 1;
				do {
					if (this->colorType == (PNGImageDecoder::COLOR | PNGImageDecoder::PALETTE)) {
						goto case$12;
					}
					if (this->colorType == ((PNGImageDecoder::COLOR | PNGImageDecoder::PALETTE) | PNGImageDecoder::ALPHA)) {
						goto case$13;
					}
					if (this->colorType == PNGImageDecoder::GRAY) {
						goto case$14;
					}
					if (this->colorType == PNGImageDecoder::COLOR) {
						goto case$15;
					}
					if (this->colorType == (PNGImageDecoder::COLOR | PNGImageDecoder::ALPHA)) {
						goto case$16;
					}
					if (this->colorType == (PNGImageDecoder::GRAY | PNGImageDecoder::ALPHA)) {
						goto case$17;
					}
					goto case$18;
case$12:
					// COLOR | PALETTE
					{
					}
case$13:
					// COLOR | PALETTE | ALPHA
					{
						if (this->red_map == nullptr) {
							$throwNew($PNGImageDecoder$PNGException, this, "palette expected"_s);
						}
						if (this->alpha_map == nullptr) {
							$set(this, cm, $new($IndexColorModel, this->bitDepth, $nc(this->red_map)->length, this->red_map, this->green_map, this->blue_map));
						} else {
							$set(this, cm, $new($IndexColorModel, this->bitDepth, $nc(this->red_map)->length, this->red_map, this->green_map, this->blue_map, this->alpha_map));
						}
						$assign(bPixels, $new($bytes, pixSize));
						break;
					}
case$14:
					// GRAY
					{
						{
							int32_t llog = logDepth >= 4 ? 3 : logDepth;
							if (($assignField(this, cm, $nc(PNGImageDecoder::greyModels)->get(llog))) == nullptr) {
								int32_t size = $sl(1, $sl(1, llog));
								$var($bytes, ramp, $new($bytes, size));
								for (int32_t i = 0; i < size; ++i) {
									ramp->set(i, (int8_t)($div(255 * i, (size - 1))));
								}
								if (this->transparentPixel == -1) {
									$set(this, cm, $new($IndexColorModel, this->bitDepth, ramp->length, ramp, ramp, ramp));
								} else {
									$set(this, cm, $new($IndexColorModel, this->bitDepth, ramp->length, ramp, ramp, ramp, ((int32_t)(this->transparentPixel & (uint32_t)255))));
								}
								$nc(PNGImageDecoder::greyModels)->set(llog, this->cm);
							}
						}
						$assign(bPixels, $new($bytes, pixSize));
						break;
					}
case$15:
					// COLOR
					{
					}
case$16:
					// COLOR | ALPHA
					{
					}
case$17:
					// GRAY | ALPHA
					{
						$set(this, cm, $ColorModel::getRGBdefault());
						$assign(wPixels, $new($ints, pixSize));
						break;
					}
case$18:
					// default
					{
						$throwNew($PNGImageDecoder$PNGException, this, "invalid color type"_s);
					}
				} while (false);
				setDimensions(this->width, this->height);
				setColorModel(this->cm);
				int32_t flags = (this->interlaceMethod != 0 ? $ImageConsumer::TOPDOWNLEFTRIGHT | $ImageConsumer::COMPLETESCANLINES : (($ImageConsumer::TOPDOWNLEFTRIGHT | $ImageConsumer::COMPLETESCANLINES) | $ImageConsumer::SINGLEPASS) | $ImageConsumer::SINGLEFRAME);
				setHints(flags);
				headerComplete();
				int32_t samplesPerPixel = (((int32_t)(this->colorType & (uint32_t)PNGImageDecoder::PALETTE)) != 0 ? 1 : (((int32_t)(this->colorType & (uint32_t)PNGImageDecoder::COLOR)) != 0 ? 3 : 1) + (((int32_t)(this->colorType & (uint32_t)PNGImageDecoder::ALPHA)) != 0 ? 1 : 0));
				int32_t bitsPerPixel = samplesPerPixel * this->bitDepth;
				int32_t bytesPerPixel = (bitsPerPixel + 7) >> 3;
				int32_t pass = 0;
				int32_t passLimit = 0;
				if (this->interlaceMethod == 0) {
					pass = -1;
					passLimit = 0;
				} else {
					pass = 0;
					passLimit = 7;
				}
				while (++pass <= passLimit) {
					int32_t row = $nc(PNGImageDecoder::startingRow)->get(pass);
					int32_t rowInc = $nc(PNGImageDecoder::rowIncrement)->get(pass);
					int32_t colInc = $nc(PNGImageDecoder::colIncrement)->get(pass);
					int32_t bWidth = $nc(PNGImageDecoder::blockWidth)->get(pass);
					int32_t bHeight = $nc(PNGImageDecoder::blockHeight)->get(pass);
					int32_t sCol = $nc(PNGImageDecoder::startingCol)->get(pass);
					int32_t rowPixelWidth = $div((this->width - sCol + (colInc - 1)), colInc);
					int32_t rowByteWidth = ((rowPixelWidth * bitsPerPixel) + 7) >> 3;
					if (rowByteWidth == 0) {
						continue;
					}
					int32_t pixelBufferInc = this->interlaceMethod == 0 ? rowInc * this->width : 0;
					int32_t rowOffset = rowStride * row;
					bool firstRow = true;
					$var($bytes, rowByteBuffer, $new($bytes, rowByteWidth));
					$var($bytes, prevRowByteBuffer, $new($bytes, rowByteWidth));
					while (row < this->height) {
						int32_t rowFilter = is->read();
						for (int32_t rowFillPos = 0; rowFillPos < rowByteWidth;) {
							int32_t n = is->read(rowByteBuffer, rowFillPos, rowByteWidth - rowFillPos);
							if (n <= 0) {
								$throwNew($PNGImageDecoder$PNGException, this, "missing data"_s);
							}
							rowFillPos += n;
						}
						filterRow(rowByteBuffer, firstRow ? ($bytes*)nullptr : prevRowByteBuffer, rowFilter, rowByteWidth, bytesPerPixel);
						int32_t col = sCol;
						int32_t spos = 0;
						int32_t pixel = 0;
						while (col < this->width) {
							if (wPixels != nullptr) {
								{
									bool isTransparent = false;
									do {
										if (combinedType == ((PNGImageDecoder::COLOR | PNGImageDecoder::ALPHA) | (8 << 3))) {
											goto case$19;
										}
										if (combinedType == ((PNGImageDecoder::COLOR | PNGImageDecoder::ALPHA) | (16 << 3))) {
											goto case$20;
										}
										if (combinedType == (PNGImageDecoder::COLOR | (8 << 3))) {
											goto case$21;
										}
										if (combinedType == (PNGImageDecoder::COLOR | (16 << 3))) {
											goto case$22;
										}
										if (combinedType == ((PNGImageDecoder::GRAY | PNGImageDecoder::ALPHA) | (8 << 3))) {
											goto case$23;
										}
										if (combinedType == ((PNGImageDecoder::GRAY | PNGImageDecoder::ALPHA) | (16 << 3))) {
											goto case$24;
										}
										goto case$25;
case$19:
										// COLOR | ALPHA | (8 << 3)
										{
											wPixels->set(col + rowOffset, (((((int32_t)(rowByteBuffer->get(spos) & (uint32_t)255)) << 16) | (((int32_t)(rowByteBuffer->get(spos + 1) & (uint32_t)255)) << 8)) | ((int32_t)(rowByteBuffer->get(spos + 2) & (uint32_t)255))) | (((int32_t)(rowByteBuffer->get(spos + 3) & (uint32_t)255)) << 24));
											spos += 4;
											break;
										}
case$20:
										// COLOR | ALPHA | (16 << 3)
										{
											wPixels->set(col + rowOffset, (((((int32_t)(rowByteBuffer->get(spos) & (uint32_t)255)) << 16) | (((int32_t)(rowByteBuffer->get(spos + 2) & (uint32_t)255)) << 8)) | ((int32_t)(rowByteBuffer->get(spos + 4) & (uint32_t)255))) | (((int32_t)(rowByteBuffer->get(spos + 6) & (uint32_t)255)) << 24));
											spos += 8;
											break;
										}
case$21:
										// COLOR | (8 << 3)
										{
											pixel = ((((int32_t)(rowByteBuffer->get(spos) & (uint32_t)255)) << 16) | (((int32_t)(rowByteBuffer->get(spos + 1) & (uint32_t)255)) << 8)) | ((int32_t)(rowByteBuffer->get(spos + 2) & (uint32_t)255));
											if (pixel != this->transparentPixel) {
												pixel |= (int32_t)0xFF000000;
											}
											wPixels->set(col + rowOffset, pixel);
											spos += 3;
											break;
										}
case$22:
										// COLOR | (16 << 3)
										{
											pixel = ((((int32_t)(rowByteBuffer->get(spos) & (uint32_t)255)) << 16) | (((int32_t)(rowByteBuffer->get(spos + 2) & (uint32_t)255)) << 8)) | ((int32_t)(rowByteBuffer->get(spos + 4) & (uint32_t)255));
											isTransparent = (this->transparentPixel_16 != nullptr);
											for (int32_t i = 0; isTransparent && (i < 6); ++i) {
												isTransparent &= ((int32_t)(rowByteBuffer->get(spos + i) & (uint32_t)255)) == ((int32_t)($nc(this->transparentPixel_16)->get(i) & (uint32_t)255));
											}
											if (!isTransparent) {
												pixel |= (int32_t)0xFF000000;
											}
											wPixels->set(col + rowOffset, pixel);
											spos += 6;
											break;
										}
case$23:
										// GRAY | ALPHA | (8 << 3)
										{
											{
												int32_t tx = (int32_t)(rowByteBuffer->get(spos) & (uint32_t)255);
												wPixels->set(col + rowOffset, (((tx << 16) | (tx << 8)) | tx) | (((int32_t)(rowByteBuffer->get(spos + 1) & (uint32_t)255)) << 24));
											}
											spos += 2;
											break;
										}
case$24:
										// GRAY | ALPHA | (16 << 3)
										{
											{
												int32_t tx = (int32_t)(rowByteBuffer->get(spos) & (uint32_t)255);
												wPixels->set(col + rowOffset, (((tx << 16) | (tx << 8)) | tx) | (((int32_t)(rowByteBuffer->get(spos + 2) & (uint32_t)255)) << 24));
											}
											spos += 4;
											break;
										}
case$25:
										// default
										{
											$throwNew($PNGImageDecoder$PNGException, this, "illegal type/depth"_s);
										}
									} while (false);
								}
							} else {
								switch (this->bitDepth) {
								case 1:
									{
										$nc(bPixels)->set(col + rowOffset, (int8_t)((int32_t)(($sr((int32_t)rowByteBuffer->get(spos >> 3), 7 - ((int32_t)(spos & (uint32_t)7)))) & (uint32_t)1)));
										++spos;
										break;
									}
								case 2:
									{
										$nc(bPixels)->set(col + rowOffset, (int8_t)((int32_t)(($sr((int32_t)rowByteBuffer->get(spos >> 2), (3 - ((int32_t)(spos & (uint32_t)3))) * 2)) & (uint32_t)3)));
										++spos;
										break;
									}
								case 4:
									{
										$nc(bPixels)->set(col + rowOffset, (int8_t)((int32_t)(($sr((int32_t)rowByteBuffer->get(spos >> 1), (1 - ((int32_t)(spos & (uint32_t)1))) * 4)) & (uint32_t)15)));
										++spos;
										break;
									}
								case 8:
									{
										$nc(bPixels)->set(col + rowOffset, rowByteBuffer->get(spos++));
										break;
									}
								case 16:
									{
										$nc(bPixels)->set(col + rowOffset, rowByteBuffer->get(spos));
										spos += 2;
										break;
									}
								default:
									{
										$throwNew($PNGImageDecoder$PNGException, this, "illegal type/depth"_s);
									}
								}
							}
							col += colInc;
						}
						if (this->interlaceMethod == 0) {
							if (wPixels != nullptr) {
								sendPixels(0, row, this->width, 1, wPixels, 0, this->width);
							} else {
								sendPixels(0, row, this->width, 1, bPixels, 0, this->width);
							}
						}
						row += rowInc;
						rowOffset += rowInc * rowStride;
						$var($bytes, T, rowByteBuffer);
						$assign(rowByteBuffer, prevRowByteBuffer);
						$assign(prevRowByteBuffer, T);
						firstRow = false;
					}
					if (this->interlaceMethod != 0) {
						if (wPixels != nullptr) {
							sendPixels(0, 0, this->width, this->height, wPixels, 0, this->width);
						} else {
							sendPixels(0, 0, this->width, this->height, bPixels, 0, this->width);
						}
					}
				}
				imageComplete($ImageConsumer::STATICIMAGEDONE, true);
			} catch ($IOException&) {
				$var($IOException, e, $catch());
				if (!this->aborted) {
					property("error"_s, $of(e));
					imageComplete($ImageConsumer::IMAGEERROR | $ImageConsumer::STATICIMAGEDONE, true);
					$throw(e);
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			try {
				close();
			} catch ($Throwable&) {
				$catch();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool PNGImageDecoder::sendPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* pixels, int32_t offset, int32_t pixlength) {
	int32_t count = setPixels(x, y, w, h, this->cm, pixels, offset, pixlength);
	if (count <= 0) {
		this->aborted = true;
	}
	return !this->aborted;
}

bool PNGImageDecoder::sendPixels(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* pixels, int32_t offset, int32_t pixlength) {
	int32_t count = setPixels(x, y, w, h, this->cm, pixels, offset, pixlength);
	if (count <= 0) {
		this->aborted = true;
	}
	return !this->aborted;
}

void PNGImageDecoder::filterRow($bytes* rowByteBuffer, $bytes* prevRow, int32_t rowFilter, int32_t rowByteWidth, int32_t bytesPerSample) {
	int32_t x = 0;
	switch (rowFilter) {
	case 0:
		{
			break;
		}
	case 1:
		{
			for (x = bytesPerSample; x < rowByteWidth; ++x) {
				(*$nc(rowByteBuffer))[x] += rowByteBuffer->get(x - bytesPerSample);
			}
			break;
		}
	case 2:
		{
			if (prevRow != nullptr) {
				for (; x < rowByteWidth; ++x) {
					(*$nc(rowByteBuffer))[x] += prevRow->get(x);
				}
			}
			break;
		}
	case 3:
		{
			if (prevRow != nullptr) {
				for (; x < bytesPerSample; ++x) {
					(*$nc(rowByteBuffer))[x] += ((int32_t)(255 & (uint32_t)(int32_t)prevRow->get(x))) >> 1;
				}
				for (; x < rowByteWidth; ++x) {
					(*$nc(rowByteBuffer))[x] += (((int32_t)(prevRow->get(x) & (uint32_t)255)) + ((int32_t)(rowByteBuffer->get(x - bytesPerSample) & (uint32_t)255))) >> 1;
				}
			} else {
				for (x = bytesPerSample; x < rowByteWidth; ++x) {
					(*$nc(rowByteBuffer))[x] += ((int32_t)(rowByteBuffer->get(x - bytesPerSample) & (uint32_t)255)) >> 1;
				}
			}
			break;
		}
	case 4:
		{
			if (prevRow != nullptr) {
				for (; x < bytesPerSample; ++x) {
					(*$nc(rowByteBuffer))[x] += prevRow->get(x);
				}
				for (; x < rowByteWidth; ++x) {
					int32_t a = 0;
					int32_t b = 0;
					int32_t c = 0;
					int32_t p = 0;
					int32_t pa = 0;
					int32_t pb = 0;
					int32_t pc = 0;
					int32_t rval = 0;
					a = (int32_t)($nc(rowByteBuffer)->get(x - bytesPerSample) & (uint32_t)255);
					b = (int32_t)(prevRow->get(x) & (uint32_t)255);
					c = (int32_t)(prevRow->get(x - bytesPerSample) & (uint32_t)255);
					p = a + b - c;
					pa = p > a ? p - a : a - p;
					pb = p > b ? p - b : b - p;
					pc = p > c ? p - c : c - p;
					(*rowByteBuffer)[x] += (pa <= pb) && (pa <= pc) ? a : pb <= pc ? b : c;
				}
			} else {
				for (x = bytesPerSample; x < rowByteWidth; ++x) {
					(*$nc(rowByteBuffer))[x] += rowByteBuffer->get(x - bytesPerSample);
				}
			}
			break;
		}
	default:
		{
			$throwNew($PNGImageDecoder$PNGException, this, "Illegal filter"_s);
		}
	}
}

void PNGImageDecoder::init$($InputStreamImageSource* src, $InputStream* input) {
	$ImageDecoder::init$(src, input);
	this->gamma = 0x000186A0;
	this->transparentPixel = -1;
	$set(this, transparentPixel_16, nullptr);
	$set(this, inbuf, $new($bytes, 4096));
	$set(this, inputStream, $new($PNGFilterInputStream, this, input));
	$set(this, underlyingInputStream, $nc(this->inputStream)->underlyingInputStream);
}

void PNGImageDecoder::fill() {
	if (!this->seenEOF) {
		if (this->pos > 0 && this->pos < this->limit) {
			$System::arraycopy(this->inbuf, this->pos, this->inbuf, 0, this->limit - this->pos);
			this->limit = this->limit - this->pos;
			this->pos = 0;
		} else if (this->pos >= this->limit) {
			this->pos = 0;
			this->limit = 0;
		}
		int32_t bsize = $nc(this->inbuf)->length;
		while (this->limit < bsize) {
			int32_t n = $nc(this->underlyingInputStream)->read(this->inbuf, this->limit, bsize - this->limit);
			if (n <= 0) {
				this->seenEOF = true;
				break;
			}
			this->limit += n;
		}
	}
}

bool PNGImageDecoder::need(int32_t n) {
	if (this->limit - this->pos >= n) {
		return true;
	}
	fill();
	if (this->limit - this->pos >= n) {
		return true;
	}
	if (this->seenEOF) {
		return false;
	}
	$var($bytes, nin, $new($bytes, n + 100));
	$System::arraycopy(this->inbuf, this->pos, nin, 0, this->limit - this->pos);
	this->limit = this->limit - this->pos;
	this->pos = 0;
	$set(this, inbuf, nin);
	fill();
	return this->limit - this->pos >= n;
}

int32_t PNGImageDecoder::getInt(int32_t pos) {
	return (((((int32_t)($nc(this->inbuf)->get(pos) & (uint32_t)255)) << 24) | (((int32_t)($nc(this->inbuf)->get(pos + 1) & (uint32_t)255)) << 16)) | (((int32_t)($nc(this->inbuf)->get(pos + 2) & (uint32_t)255)) << 8)) | ((int32_t)($nc(this->inbuf)->get(pos + 3) & (uint32_t)255));
}

int32_t PNGImageDecoder::getShort(int32_t pos) {
	return (int16_t)((((int32_t)($nc(this->inbuf)->get(pos) & (uint32_t)255)) << 8) | ((int32_t)($nc(this->inbuf)->get(pos + 1) & (uint32_t)255)));
}

int32_t PNGImageDecoder::getByte(int32_t pos) {
	return (int32_t)($nc(this->inbuf)->get(pos) & (uint32_t)255);
}

bool PNGImageDecoder::getChunk() {
	this->chunkLength = 0;
	if (!need(8)) {
		return false;
	}
	this->chunkLength = getInt(this->pos);
	this->chunkKey = getInt(this->pos + 4);
	if (this->chunkLength < 0) {
		$throwNew($PNGImageDecoder$PNGException, this, $$str({"bogus length: "_s, $$str(this->chunkLength)}));
	}
	if (!need(this->chunkLength + 12)) {
		return false;
	}
	this->chunkCRC = getInt(this->pos + 8 + this->chunkLength);
	this->chunkStart = this->pos + 8;
	int32_t calcCRC = crc(this->inbuf, this->pos + 4, this->chunkLength + 4);
	if (this->chunkCRC != calcCRC && PNGImageDecoder::checkCRC) {
		$throwNew($PNGImageDecoder$PNGException, this, "crc corruption"_s);
	}
	this->pos += this->chunkLength + 12;
	return true;
}

void PNGImageDecoder::readAll() {
	while (getChunk()) {
		handleChunk(this->chunkKey, this->inbuf, this->chunkStart, this->chunkLength);
	}
}

bool PNGImageDecoder::getData() {
	while (this->chunkLength == 0 && getChunk()) {
		if (handleChunk(this->chunkKey, this->inbuf, this->chunkStart, this->chunkLength)) {
			this->chunkLength = 0;
		}
	}
	return this->chunkLength > 0;
}

bool PNGImageDecoder::getCheckCRC() {
	$init(PNGImageDecoder);
	return PNGImageDecoder::checkCRC;
}

void PNGImageDecoder::setCheckCRC(bool c) {
	$init(PNGImageDecoder);
	PNGImageDecoder::checkCRC = c;
}

void PNGImageDecoder::wrc(int32_t c) {
	c = (int32_t)(c & (uint32_t)255);
	if (c <= u' ' || c > u'z') {
		c = u'?';
	}
	$init($System);
	$nc($System::out)->write(c);
}

void PNGImageDecoder::wrk(int32_t n) {
	wrc(n >> 24);
	wrc(n >> 16);
	wrc(n >> 8);
	wrc(n);
}

void PNGImageDecoder::print() {
	wrk(this->chunkKey);
	$init($System);
	$nc($System::out)->print($$str({" "_s, $$str(this->chunkLength), "\n"_s}));
}

int32_t PNGImageDecoder::update_crc(int32_t crc, $bytes* buf, int32_t offset, int32_t len) {
	$init(PNGImageDecoder);
	int32_t c = crc;
	while (--len >= 0) {
		c = $nc(PNGImageDecoder::crc_table)->get((int32_t)((c ^ $nc(buf)->get(offset++)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)c >> 8));
	}
	return c;
}

int32_t PNGImageDecoder::crc($bytes* buf, int32_t offset, int32_t len) {
	$init(PNGImageDecoder);
	return update_crc(-1, buf, offset, len) ^ -1;
}

void clinit$PNGImageDecoder($Class* class$) {
	$assignStatic(PNGImageDecoder::greyModels, $new($ColorModelArray, 4));
	$assignStatic(PNGImageDecoder::startingRow, $new($bytes, {
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)4,
		(int8_t)0,
		(int8_t)2,
		(int8_t)0,
		(int8_t)1
	}));
	$assignStatic(PNGImageDecoder::startingCol, $new($bytes, {
		(int8_t)0,
		(int8_t)0,
		(int8_t)4,
		(int8_t)0,
		(int8_t)2,
		(int8_t)0,
		(int8_t)1,
		(int8_t)0
	}));
	$assignStatic(PNGImageDecoder::rowIncrement, $new($bytes, {
		(int8_t)1,
		(int8_t)8,
		(int8_t)8,
		(int8_t)8,
		(int8_t)4,
		(int8_t)4,
		(int8_t)2,
		(int8_t)2
	}));
	$assignStatic(PNGImageDecoder::colIncrement, $new($bytes, {
		(int8_t)1,
		(int8_t)8,
		(int8_t)8,
		(int8_t)4,
		(int8_t)4,
		(int8_t)2,
		(int8_t)2,
		(int8_t)1
	}));
	$assignStatic(PNGImageDecoder::blockHeight, $new($bytes, {
		(int8_t)1,
		(int8_t)8,
		(int8_t)8,
		(int8_t)4,
		(int8_t)4,
		(int8_t)2,
		(int8_t)2,
		(int8_t)1
	}));
	$assignStatic(PNGImageDecoder::blockWidth, $new($bytes, {
		(int8_t)1,
		(int8_t)8,
		(int8_t)4,
		(int8_t)4,
		(int8_t)2,
		(int8_t)2,
		(int8_t)1,
		(int8_t)1
	}));
	$assignStatic(PNGImageDecoder::signature, $new($bytes, {
		(int8_t)137,
		(int8_t)80,
		(int8_t)78,
		(int8_t)71,
		(int8_t)13,
		(int8_t)10,
		(int8_t)26,
		(int8_t)10
	}));
	PNGImageDecoder::checkCRC = true;
	$assignStatic(PNGImageDecoder::crc_table, $new($ints, 256));
	{
		for (int32_t n = 0; n < 256; ++n) {
			int32_t c = n;
			for (int32_t k = 0; k < 8; ++k) {
				if (((int32_t)(c & (uint32_t)1)) != 0) {
					c = (int32_t)0xEDB88320 ^ ((int32_t)((uint32_t)c >> 1));
				} else {
					c = (int32_t)((uint32_t)c >> 1);
				}
			}
			$nc(PNGImageDecoder::crc_table)->set(n, c);
		}
	}
}

PNGImageDecoder::PNGImageDecoder() {
}

$Class* PNGImageDecoder::load$($String* name, bool initialize) {
	$loadClass(PNGImageDecoder, name, initialize, &_PNGImageDecoder_ClassInfo_, clinit$PNGImageDecoder, allocate$PNGImageDecoder);
	return class$;
}

$Class* PNGImageDecoder::class$ = nullptr;

		} // image
	} // awt
} // sun