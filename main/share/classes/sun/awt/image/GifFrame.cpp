#include <sun/awt/image/GifFrame.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/lang/InterruptedException.h>
#include <sun/awt/image/GifImageDecoder.h>
#include <jcpp.h>

#undef DISPOSAL_BGCOLOR
#undef DISPOSAL_NONE
#undef DISPOSAL_PREVIOUS
#undef DISPOSAL_SAVE
#undef SINGLEFRAMEDONE

using $ColorModel = ::java::awt::image::ColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $GifImageDecoder = ::sun::awt::image::GifImageDecoder;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _GifFrame_FieldInfo_[] = {
	{"verbose", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GifFrame, verbose)},
	{"DISPOSAL_NONE", "I", nullptr, $STATIC | $FINAL, $constField(GifFrame, DISPOSAL_NONE)},
	{"DISPOSAL_SAVE", "I", nullptr, $STATIC | $FINAL, $constField(GifFrame, DISPOSAL_SAVE)},
	{"DISPOSAL_BGCOLOR", "I", nullptr, $STATIC | $FINAL, $constField(GifFrame, DISPOSAL_BGCOLOR)},
	{"DISPOSAL_PREVIOUS", "I", nullptr, $STATIC | $FINAL, $constField(GifFrame, DISPOSAL_PREVIOUS)},
	{"decoder", "Lsun/awt/image/GifImageDecoder;", nullptr, 0, $field(GifFrame, decoder)},
	{"disposal_method", "I", nullptr, 0, $field(GifFrame, disposal_method)},
	{"delay", "I", nullptr, 0, $field(GifFrame, delay)},
	{"model", "Ljava/awt/image/IndexColorModel;", nullptr, 0, $field(GifFrame, model)},
	{"x", "I", nullptr, 0, $field(GifFrame, x)},
	{"y", "I", nullptr, 0, $field(GifFrame, y)},
	{"width", "I", nullptr, 0, $field(GifFrame, width)},
	{"height", "I", nullptr, 0, $field(GifFrame, height)},
	{"initialframe", "Z", nullptr, 0, $field(GifFrame, initialframe)},
	{}
};

$MethodInfo _GifFrame_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/GifImageDecoder;IIZLjava/awt/image/IndexColorModel;IIII)V", nullptr, $PUBLIC, $method(static_cast<void(GifFrame::*)($GifImageDecoder*,int32_t,int32_t,bool,$IndexColorModel*,int32_t,int32_t,int32_t,int32_t)>(&GifFrame::init$))},
	{"dispose", "()Z", nullptr, $PUBLIC},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[BII)V", nullptr, $PRIVATE, $method(static_cast<void(GifFrame::*)(int32_t,int32_t,int32_t,int32_t,$ColorModel*,$bytes*,int32_t,int32_t)>(&GifFrame::setPixels))},
	{}
};

$ClassInfo _GifFrame_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.image.GifFrame",
	"java.lang.Object",
	nullptr,
	_GifFrame_FieldInfo_,
	_GifFrame_MethodInfo_
};

$Object* allocate$GifFrame($Class* clazz) {
	return $of($alloc(GifFrame));
}

void GifFrame::init$($GifImageDecoder* id, int32_t dm, int32_t dl, bool init, $IndexColorModel* cm, int32_t x, int32_t y, int32_t w, int32_t h) {
	$set(this, decoder, id);
	this->disposal_method = dm;
	this->delay = dl;
	$set(this, model, cm);
	this->initialframe = init;
	this->x = x;
	this->y = y;
	this->width = w;
	this->height = h;
}

void GifFrame::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* cm, $bytes* pix, int32_t off, int32_t scan) {
	$nc(this->decoder)->setPixels(x, y, w, h, cm, pix, off, scan);
}

bool GifFrame::dispose() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->decoder)->imageComplete($ImageConsumer::SINGLEFRAMEDONE, false) == 0) {
		return false;
	} else {
		if (this->delay > 0) {
			try {
				$Thread::sleep(this->delay);
			} catch ($InterruptedException& e) {
				return false;
			}
		} else {
			$Thread::yield();
		}
		int32_t global_width = $nc(this->decoder)->global_width;
		int32_t global_height = $nc(this->decoder)->global_height;
		if (this->x < 0) {
			this->width += this->x;
			this->x = 0;
		}
		if (this->x + this->width > global_width) {
			this->width = global_width - this->x;
		}
		if (this->width <= 0) {
			this->disposal_method = GifFrame::DISPOSAL_NONE;
		} else {
			if (this->y < 0) {
				this->height += this->y;
				this->y = 0;
			}
			if (this->y + this->height > global_height) {
				this->height = global_height - this->y;
			}
			if (this->height <= 0) {
				this->disposal_method = GifFrame::DISPOSAL_NONE;
			}
		}
		{
			$var($bytes, saved_image, nullptr)
			$var($IndexColorModel, saved_model, nullptr)
			int8_t tpix = 0;
			$var($bytes, rasline, nullptr)
			switch (this->disposal_method) {
			case GifFrame::DISPOSAL_PREVIOUS:
				{
					$assign(saved_image, $nc(this->decoder)->saved_image);
					$assign(saved_model, $nc(this->decoder)->saved_model);
					if (saved_image != nullptr) {
						setPixels(this->x, this->y, this->width, this->height, saved_model, saved_image, this->y * global_width + this->x, global_width);
					}
					break;
				}
			case GifFrame::DISPOSAL_BGCOLOR:
				{
					if ($nc(this->model)->getTransparentPixel() < 0) {
						tpix = (int8_t)0;
					} else {
						tpix = (int8_t)$nc(this->model)->getTransparentPixel();
					}
					$assign(rasline, $new($bytes, this->width));
					if (tpix != 0) {
						for (int32_t i = 0; i < this->width; ++i) {
							$nc(rasline)->set(i, tpix);
						}
					}
					if ($nc(this->decoder)->saved_image != nullptr) {
						for (int32_t i = 0; i < global_width * global_height; ++i) {
							$nc($nc(this->decoder)->saved_image)->set(i, tpix);
						}
					}
					setPixels(this->x, this->y, this->width, this->height, this->model, rasline, 0, 0);
					break;
				}
			case GifFrame::DISPOSAL_SAVE:
				{
					$set($nc(this->decoder), saved_model, this->model);
					break;
				}
			}
		}
	}
	return true;
}

GifFrame::GifFrame() {
}

$Class* GifFrame::load$($String* name, bool initialize) {
	$loadClass(GifFrame, name, initialize, &_GifFrame_ClassInfo_, allocate$GifFrame);
	return class$;
}

$Class* GifFrame::class$ = nullptr;

		} // image
	} // awt
} // sun