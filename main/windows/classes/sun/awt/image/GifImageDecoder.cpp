#include <sun/awt/image/GifImageDecoder.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/GifFrame.h>
#include <sun/awt/image/ImageDecoder.h>
#include <sun/awt/image/ImageFetcher.h>
#include <sun/awt/image/ImageFormatException.h>
#include <sun/awt/image/InputStreamImageSource.h>
#include <sun/awt/image/NativeLibLoader.h>
#include <jcpp.h>

#undef COLORMAPMASK
#undef DISPOSAL_SAVE
#undef EXBLOCK
#undef EX_APPLICATION
#undef EX_COMMENT
#undef EX_GRAPHICS_CONTROL
#undef IMAGESEP
#undef INTERLACEMASK
#undef MAX_VALUE
#undef STATICIMAGEDONE
#undef TERMINATOR
#undef TRANSPARENCYMASK

using $ColorModel = ::java::awt::image::ColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $GifFrame = ::sun::awt::image::GifFrame;
using $ImageDecoder = ::sun::awt::image::ImageDecoder;
using $ImageFetcher = ::sun::awt::image::ImageFetcher;
using $ImageFormatException = ::sun::awt::image::ImageFormatException;
using $InputStreamImageSource = ::sun::awt::image::InputStreamImageSource;
using $NativeLibLoader = ::sun::awt::image::NativeLibLoader;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _GifImageDecoder_FieldInfo_[] = {
	{"verbose", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GifImageDecoder, verbose)},
	{"IMAGESEP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GifImageDecoder, IMAGESEP)},
	{"EXBLOCK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GifImageDecoder, EXBLOCK)},
	{"EX_GRAPHICS_CONTROL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GifImageDecoder, EX_GRAPHICS_CONTROL)},
	{"EX_COMMENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GifImageDecoder, EX_COMMENT)},
	{"EX_APPLICATION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GifImageDecoder, EX_APPLICATION)},
	{"TERMINATOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GifImageDecoder, TERMINATOR)},
	{"TRANSPARENCYMASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GifImageDecoder, TRANSPARENCYMASK)},
	{"INTERLACEMASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GifImageDecoder, INTERLACEMASK)},
	{"COLORMAPMASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GifImageDecoder, COLORMAPMASK)},
	{"num_global_colors", "I", nullptr, 0, $field(GifImageDecoder, num_global_colors)},
	{"global_colormap", "[B", nullptr, 0, $field(GifImageDecoder, global_colormap)},
	{"trans_pixel", "I", nullptr, 0, $field(GifImageDecoder, trans_pixel)},
	{"global_model", "Ljava/awt/image/IndexColorModel;", nullptr, 0, $field(GifImageDecoder, global_model)},
	{"props", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", 0, $field(GifImageDecoder, props)},
	{"saved_image", "[B", nullptr, 0, $field(GifImageDecoder, saved_image)},
	{"saved_model", "Ljava/awt/image/IndexColorModel;", nullptr, 0, $field(GifImageDecoder, saved_model)},
	{"global_width", "I", nullptr, 0, $field(GifImageDecoder, global_width)},
	{"global_height", "I", nullptr, 0, $field(GifImageDecoder, global_height)},
	{"global_bgpixel", "I", nullptr, 0, $field(GifImageDecoder, global_bgpixel)},
	{"curframe", "Lsun/awt/image/GifFrame;", nullptr, 0, $field(GifImageDecoder, curframe)},
	{"normalflags", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GifImageDecoder, normalflags)},
	{"interlaceflags", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GifImageDecoder, interlaceflags)},
	{"prefix", "[S", nullptr, $PRIVATE, $field(GifImageDecoder, prefix)},
	{"suffix", "[B", nullptr, $PRIVATE, $field(GifImageDecoder, suffix)},
	{"outCode", "[B", nullptr, $PRIVATE, $field(GifImageDecoder, outCode)},
	{}
};

$MethodInfo _GifImageDecoder_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/InputStreamImageSource;Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(GifImageDecoder::*)($InputStreamImageSource*,$InputStream*)>(&GifImageDecoder::init$))},
	{"ExtractByte", "([BI)I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<int32_t(*)($bytes*,int32_t)>(&GifImageDecoder::ExtractByte))},
	{"ExtractWord", "([BI)I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<int32_t(*)($bytes*,int32_t)>(&GifImageDecoder::ExtractWord))},
	{"error", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&GifImageDecoder::error)), "sun.awt.image.ImageFormatException"},
	{"grow_colormap", "([BI)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*,int32_t)>(&GifImageDecoder::grow_colormap))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&GifImageDecoder::initIDs))},
	{"parseImage", "(IIIIZI[B[BLjava/awt/image/IndexColorModel;)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(GifImageDecoder::*)(int32_t,int32_t,int32_t,int32_t,bool,int32_t,$bytes*,$bytes*,$IndexColorModel*)>(&GifImageDecoder::parseImage))},
	{"produceImage", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException,sun.awt.image.ImageFormatException"},
	{"readBytes", "([BII)I", nullptr, $PRIVATE, $method(static_cast<int32_t(GifImageDecoder::*)($bytes*,int32_t,int32_t)>(&GifImageDecoder::readBytes))},
	{"readHeader", "()V", nullptr, $PRIVATE, $method(static_cast<void(GifImageDecoder::*)()>(&GifImageDecoder::readHeader)), "java.io.IOException,sun.awt.image.ImageFormatException"},
	{"readImage", "(ZII)Z", nullptr, $PRIVATE, $method(static_cast<bool(GifImageDecoder::*)(bool,int32_t,int32_t)>(&GifImageDecoder::readImage)), "java.io.IOException"},
	{"sendPixels", "(IIII[BLjava/awt/image/ColorModel;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(GifImageDecoder::*)(int32_t,int32_t,int32_t,int32_t,$bytes*,$ColorModel*)>(&GifImageDecoder::sendPixels))},
	{}
};

#define _METHOD_INDEX_initIDs 5
#define _METHOD_INDEX_parseImage 6

$ClassInfo _GifImageDecoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.GifImageDecoder",
	"sun.awt.image.ImageDecoder",
	nullptr,
	_GifImageDecoder_FieldInfo_,
	_GifImageDecoder_MethodInfo_
};

$Object* allocate$GifImageDecoder($Class* clazz) {
	return $of($alloc(GifImageDecoder));
}

void GifImageDecoder::init$($InputStreamImageSource* src, $InputStream* is) {
	$ImageDecoder::init$(src, is);
	this->trans_pixel = -1;
	$set(this, props, $new($Hashtable));
	$set(this, prefix, $new($shorts, 4096));
	$set(this, suffix, $new($bytes, 4096));
	$set(this, outCode, $new($bytes, 4097));
}

void GifImageDecoder::error($String* s1) {
	$init(GifImageDecoder);
	$throwNew($ImageFormatException, s1);
}

int32_t GifImageDecoder::readBytes($bytes* buf, int32_t off, int32_t len) {
	while (len > 0) {
		try {
			int32_t n = $nc(this->input)->read(buf, off, len);
			if (n < 0) {
				break;
			}
			off += n;
			len -= n;
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			break;
		}
	}
	return len;
}

int32_t GifImageDecoder::ExtractByte($bytes* buf, int32_t off) {
	$init(GifImageDecoder);
	return ((int32_t)($nc(buf)->get(off) & (uint32_t)255));
}

int32_t GifImageDecoder::ExtractWord($bytes* buf, int32_t off) {
	$init(GifImageDecoder);
	return ((int32_t)($nc(buf)->get(off) & (uint32_t)255)) | (((int32_t)(buf->get(off + 1) & (uint32_t)255)) << 8);
}

void GifImageDecoder::produceImage() {
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			readHeader();
			int32_t totalframes = 0;
			int32_t frameno = 0;
			int32_t nloops = -1;
			int32_t disposal_method = 0;
			int32_t delay = -1;
			bool loopsRead = false;
			bool isAnimation = false;
			while (!this->aborted) {
				int32_t code = 0;
				switch (code = $nc(this->input)->read()) {
				case GifImageDecoder::EXBLOCK:
					{
						{
							bool loop_tag = false;
							$var($String, comment, nullptr)
							switch (code = $nc(this->input)->read()) {
							case GifImageDecoder::EX_GRAPHICS_CONTROL:
								{
									{
										$var($bytes, buf, $new($bytes, 6));
										if (readBytes(buf, 0, 6) != 0) {
											return$1 = true;
											goto $finally;
										}
										if ((buf->get(0) != 4) || (buf->get(5) != 0)) {
											return$1 = true;
											goto $finally;
										}
										delay = ExtractWord(buf, 2) * 10;
										if (delay > 0 && !isAnimation) {
											isAnimation = true;
											$ImageFetcher::startingAnimation();
										}
										disposal_method = (int32_t)((buf->get(1) >> 2) & (uint32_t)7);
										if (((int32_t)(buf->get(1) & (uint32_t)GifImageDecoder::TRANSPARENCYMASK)) != 0) {
											this->trans_pixel = ExtractByte(buf, 4);
										} else {
											this->trans_pixel = -1;
										}
										break;
									}
								}
							case GifImageDecoder::EX_COMMENT:
								{}
							case GifImageDecoder::EX_APPLICATION:
								{}
							default:
								{
									loop_tag = false;
									$assign(comment, ""_s);
									while (true) {
										int32_t n = $nc(this->input)->read();
										if (n <= 0) {
											break;
										}
										$var($bytes, buf, $new($bytes, n));
										if (readBytes(buf, 0, n) != 0) {
											return$1 = true;
											goto $finally;
										}
										if (code == GifImageDecoder::EX_COMMENT) {
											$plusAssign(comment, $$new($String, buf, 0));
										} else if (code == GifImageDecoder::EX_APPLICATION) {
											if (loop_tag) {
												if (n == 3 && buf->get(0) == 1) {
													if (loopsRead) {
														ExtractWord(buf, 1);
													} else {
														nloops = ExtractWord(buf, 1);
														loopsRead = true;
													}
												} else {
													loop_tag = false;
												}
											}
											if ("NETSCAPE2.0"_s->equals($$new($String, buf, 0))) {
												loop_tag = true;
											}
										}
									}
									if (code == GifImageDecoder::EX_COMMENT) {
										$nc(this->props)->put("comment"_s, comment);
									}
									if (loop_tag && !isAnimation) {
										isAnimation = true;
										$ImageFetcher::startingAnimation();
									}
									break;
								}
							case -1:
								{
									return$1 = true;
									goto $finally;
								}
							}
						}
						break;
					}
				case GifImageDecoder::IMAGESEP:
					{
						if (!isAnimation) {
							$nc(this->input)->mark(0);
						}
						try {
							if (!readImage(totalframes == 0, disposal_method, delay)) {
								return;
							}
						} catch ($Exception&) {
							$var($Exception, e, $catch());
							return;
						}
						++frameno;
						++totalframes;
						break;
					}
				default:
					{}
				case -1:
					{
						if (frameno == 0) {
							return$1 = true;
							goto $finally;
						}
					}
				case GifImageDecoder::TERMINATOR:
					{
						bool var$2 = nloops == 0;
						if (var$2 || nloops-- >= 0) {
							try {
								if (this->curframe != nullptr) {
									$nc(this->curframe)->dispose();
									$set(this, curframe, nullptr);
								}
								$nc(this->input)->reset();
								$set(this, saved_image, nullptr);
								$set(this, saved_model, nullptr);
								frameno = 0;
								break;
							} catch ($IOException&) {
								$var($IOException, e, $catch());
								return;
							}
						}
						imageComplete($ImageConsumer::STATICIMAGEDONE, true);
						return$1 = true;
						goto $finally;
					}
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

void GifImageDecoder::readHeader() {
	$var($bytes, buf, $new($bytes, 13));
	if (readBytes(buf, 0, 13) != 0) {
		$throwNew($IOException);
	}
	if ((buf->get(0) != u'G') || (buf->get(1) != u'I') || (buf->get(2) != u'F')) {
		error("not a GIF file."_s);
	}
	this->global_width = ExtractWord(buf, 6);
	this->global_height = ExtractWord(buf, 8);
	int32_t ch = ExtractByte(buf, 10);
	if (((int32_t)(ch & (uint32_t)GifImageDecoder::COLORMAPMASK)) == 0) {
		this->num_global_colors = 2;
		this->global_bgpixel = 0;
		$set(this, global_colormap, $new($bytes, 2 * 3));
		$nc(this->global_colormap)->set(0, $nc(this->global_colormap)->set(1, $nc(this->global_colormap)->set(2, (int8_t)0)));
		$nc(this->global_colormap)->set(3, $nc(this->global_colormap)->set(4, $nc(this->global_colormap)->set(5, (int8_t)255)));
	} else {
		this->num_global_colors = $sl(1, ((int32_t)(ch & (uint32_t)7)) + 1);
		this->global_bgpixel = ExtractByte(buf, 11);
		if (buf->get(12) != 0) {
			$nc(this->props)->put("aspectratio"_s, $$str({""_s, $$str(((ExtractByte(buf, 12) + 15) / 64.0))}));
		}
		$set(this, global_colormap, $new($bytes, this->num_global_colors * 3));
		if (readBytes(this->global_colormap, 0, this->num_global_colors * 3) != 0) {
			$throwNew($IOException);
		}
	}
	$nc(this->input)->mark($Integer::MAX_VALUE);
}

void GifImageDecoder::initIDs() {
	$init(GifImageDecoder);
	$prepareNativeStatic(GifImageDecoder, initIDs, void);
	$invokeNativeStatic(GifImageDecoder, initIDs);
	$finishNativeStatic();
}

bool GifImageDecoder::parseImage(int32_t x, int32_t y, int32_t width, int32_t height, bool interlace, int32_t initCodeSize, $bytes* block, $bytes* rasline, $IndexColorModel* model) {
	bool $ret = false;
	$prepareNative(GifImageDecoder, parseImage, bool, int32_t x, int32_t y, int32_t width, int32_t height, bool interlace, int32_t initCodeSize, $bytes* block, $bytes* rasline, $IndexColorModel* model);
	$ret = $invokeNative(GifImageDecoder, parseImage, x, y, width, height, interlace, initCodeSize, block, rasline, model);
	$finishNative();
	return $ret;
}

int32_t GifImageDecoder::sendPixels(int32_t x, int32_t y, int32_t width, int32_t height, $bytes* rasline, $ColorModel* model) {
	int32_t rasbeg = 0;
	int32_t rasend = 0;
	int32_t x2 = 0;
	if (y < 0) {
		height += y;
		y = 0;
	}
	if (y + height > this->global_height) {
		height = this->global_height - y;
	}
	if (height <= 0) {
		return 1;
	}
	if (x < 0) {
		rasbeg = -x;
		width += x;
		x2 = 0;
	} else {
		rasbeg = 0;
		x2 = x;
	}
	if (x2 + width > this->global_width) {
		width = this->global_width - x2;
	}
	if (width <= 0) {
		return 1;
	}
	rasend = rasbeg + width;
	int32_t off = y * this->global_width + x2;
	bool save = ($nc(this->curframe)->disposal_method == $GifFrame::DISPOSAL_SAVE);
	if (this->trans_pixel >= 0 && !$nc(this->curframe)->initialframe) {
		if (this->saved_image != nullptr && $nc(model)->equals(this->saved_model)) {
			for (int32_t i = rasbeg; i < rasend; ++i, ++off) {
				int8_t pixel = $nc(rasline)->get(i);
				if (((int32_t)(pixel & (uint32_t)255)) == this->trans_pixel) {
					rasline->set(i, $nc(this->saved_image)->get(off));
				} else if (save) {
					$nc(this->saved_image)->set(off, pixel);
				}
			}
		} else {
			int32_t runstart = -1;
			int32_t count = 1;
			for (int32_t i = rasbeg; i < rasend; ++i, ++off) {
				int8_t pixel = $nc(rasline)->get(i);
				if (((int32_t)(pixel & (uint32_t)255)) == this->trans_pixel) {
					if (runstart >= 0) {
						count = setPixels(x + runstart, y, i - runstart, 1, model, rasline, runstart, 0);
						if (count == 0) {
							break;
						}
					}
					runstart = -1;
				} else {
					if (runstart < 0) {
						runstart = i;
					}
					if (save) {
						$nc(this->saved_image)->set(off, pixel);
					}
				}
			}
			if (runstart >= 0) {
				count = setPixels(x + runstart, y, rasend - runstart, 1, model, rasline, runstart, 0);
			}
			return count;
		}
	} else if (save) {
		$System::arraycopy(rasline, rasbeg, this->saved_image, off, width);
	}
	int32_t count = setPixels(x2, y, width, height, model, rasline, rasbeg, 0);
	return count;
}

bool GifImageDecoder::readImage(bool first, int32_t disposal_method, int32_t delay) {
	if (this->curframe != nullptr && !$nc(this->curframe)->dispose()) {
		abort();
		return false;
	}
	int64_t tm = 0;
	$var($bytes, block, $new($bytes, 256 + 3));
	if (readBytes(block, 0, 10) != 0) {
		$throwNew($IOException);
	}
	int32_t x = ExtractWord(block, 0);
	int32_t y = ExtractWord(block, 2);
	int32_t width = ExtractWord(block, 4);
	int32_t height = ExtractWord(block, 6);
	if (width == 0 && this->global_width != 0) {
		width = this->global_width - x;
	}
	if (height == 0 && this->global_height != 0) {
		height = this->global_height - y;
	}
	bool interlace = ((int32_t)(block->get(8) & (uint32_t)GifImageDecoder::INTERLACEMASK)) != 0;
	$var($IndexColorModel, model, this->global_model);
	if (((int32_t)(block->get(8) & (uint32_t)GifImageDecoder::COLORMAPMASK)) != 0) {
		int32_t num_local_colors = $sl(1, ((int32_t)(block->get(8) & (uint32_t)7)) + 1);
		$var($bytes, local_colormap, $new($bytes, num_local_colors * 3));
		local_colormap->set(0, block->get(9));
		if (readBytes(local_colormap, 1, num_local_colors * 3 - 1) != 0) {
			$throwNew($IOException);
		}
		if (readBytes(block, 9, 1) != 0) {
			$throwNew($IOException);
		}
		if (this->trans_pixel >= num_local_colors) {
			num_local_colors = this->trans_pixel + 1;
			$assign(local_colormap, grow_colormap(local_colormap, num_local_colors));
		}
		$assign(model, $new($IndexColorModel, 8, num_local_colors, local_colormap, 0, false, this->trans_pixel));
	} else if (model == nullptr || this->trans_pixel != model->getTransparentPixel()) {
		if (this->trans_pixel >= this->num_global_colors) {
			this->num_global_colors = this->trans_pixel + 1;
			$set(this, global_colormap, grow_colormap(this->global_colormap, this->num_global_colors));
		}
		$assign(model, $new($IndexColorModel, 8, this->num_global_colors, this->global_colormap, 0, false, this->trans_pixel));
		$set(this, global_model, model);
	}
	if (first) {
		if (this->global_width == 0) {
			this->global_width = width;
		}
		if (this->global_height == 0) {
			this->global_height = height;
		}
		setDimensions(this->global_width, this->global_height);
		setProperties(this->props);
		setColorModel(model);
		headerComplete();
	}
	if (disposal_method == $GifFrame::DISPOSAL_SAVE && this->saved_image == nullptr) {
		$set(this, saved_image, $new($bytes, this->global_width * this->global_height));
		if ((height < this->global_height) && (model != nullptr)) {
			int8_t tpix = (int8_t)model->getTransparentPixel();
			if (tpix >= 0) {
				$var($bytes, trans_rasline, $new($bytes, this->global_width));
				for (int32_t i = 0; i < this->global_width; ++i) {
					trans_rasline->set(i, tpix);
				}
				setPixels(0, 0, this->global_width, y, static_cast<$ColorModel*>(model), trans_rasline, 0, 0);
				setPixels(0, y + height, this->global_width, this->global_height - height - y, static_cast<$ColorModel*>(model), trans_rasline, 0, 0);
			}
		}
	}
	int32_t hints = (interlace ? GifImageDecoder::interlaceflags : GifImageDecoder::normalflags);
	setHints(hints);
	$set(this, curframe, $new($GifFrame, this, disposal_method, delay, (this->curframe == nullptr), model, x, y, width, height));
	$var($bytes, rasline, $new($bytes, width));
	int32_t initCodeSize = ExtractByte(block, 9);
	if (initCodeSize >= 12) {
		return false;
	}
	bool ret = parseImage(x, y, width, height, interlace, initCodeSize, block, rasline, model);
	if (!ret) {
		abort();
	}
	return ret;
}

$bytes* GifImageDecoder::grow_colormap($bytes* colormap, int32_t newlen) {
	$init(GifImageDecoder);
	$var($bytes, newcm, $new($bytes, newlen * 3));
	$System::arraycopy(colormap, 0, newcm, 0, $nc(colormap)->length);
	return newcm;
}

void clinit$GifImageDecoder($Class* class$) {
	{
		$NativeLibLoader::loadLibraries();
		GifImageDecoder::initIDs();
	}
}

GifImageDecoder::GifImageDecoder() {
}

$Class* GifImageDecoder::load$($String* name, bool initialize) {
	$loadClass(GifImageDecoder, name, initialize, &_GifImageDecoder_ClassInfo_, clinit$GifImageDecoder, allocate$GifImageDecoder);
	return class$;
}

$Class* GifImageDecoder::class$ = nullptr;

		} // image
	} // awt
} // sun