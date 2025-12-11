#include <java/awt/GradientPaintContext.h>

#include <java/awt/Color.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/geom/Point2D$Double.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/PackedColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/awt/image/IntegerComponentRaster.h>
#include <jcpp.h>

#undef MIN_VALUE

using $Color = ::java::awt::Color;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $Point2D = ::java::awt::geom::Point2D;
using $Point2D$Double = ::java::awt::geom::Point2D$Double;
using $ColorModel = ::java::awt::image::ColorModel;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $PackedColorModel = ::java::awt::image::PackedColorModel;
using $Raster = ::java::awt::image::Raster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;

namespace java {
	namespace awt {

$FieldInfo _GradientPaintContext_FieldInfo_[] = {
	{"xrgbmodel", "Ljava/awt/image/ColorModel;", nullptr, $STATIC, $staticField(GradientPaintContext, xrgbmodel)},
	{"xbgrmodel", "Ljava/awt/image/ColorModel;", nullptr, $STATIC, $staticField(GradientPaintContext, xbgrmodel)},
	{"cachedModel", "Ljava/awt/image/ColorModel;", nullptr, $STATIC, $staticField(GradientPaintContext, cachedModel)},
	{"cached", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/image/Raster;>;", $STATIC, $staticField(GradientPaintContext, cached)},
	{"x1", "D", nullptr, 0, $field(GradientPaintContext, x1)},
	{"y1", "D", nullptr, 0, $field(GradientPaintContext, y1)},
	{"dx", "D", nullptr, 0, $field(GradientPaintContext, dx)},
	{"dy", "D", nullptr, 0, $field(GradientPaintContext, dy)},
	{"cyclic", "Z", nullptr, 0, $field(GradientPaintContext, cyclic)},
	{"interp", "[I", nullptr, 0, $field(GradientPaintContext, interp)},
	{"saved", "Ljava/awt/image/Raster;", nullptr, 0, $field(GradientPaintContext, saved)},
	{"model", "Ljava/awt/image/ColorModel;", nullptr, 0, $field(GradientPaintContext, model)},
	{}
};

$MethodInfo _GradientPaintContext_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/ColorModel;Ljava/awt/geom/Point2D;Ljava/awt/geom/Point2D;Ljava/awt/geom/AffineTransform;Ljava/awt/Color;Ljava/awt/Color;Z)V", nullptr, $PUBLIC, $method(static_cast<void(GradientPaintContext::*)($ColorModel*,$Point2D*,$Point2D*,$AffineTransform*,$Color*,$Color*,bool)>(&GradientPaintContext::init$))},
	{"clipFillRaster", "([IIIIIDDD)V", nullptr, 0},
	{"cycleFillRaster", "([IIIIIDDD)V", nullptr, 0},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getCachedRaster", "(Ljava/awt/image/ColorModel;II)Ljava/awt/image/Raster;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<$Raster*(*)($ColorModel*,int32_t,int32_t)>(&GradientPaintContext::getCachedRaster))},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getRaster", "(IIII)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"putCachedRaster", "(Ljava/awt/image/ColorModel;Ljava/awt/image/Raster;)V", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($ColorModel*,$Raster*)>(&GradientPaintContext::putCachedRaster))},
	{}
};

$ClassInfo _GradientPaintContext_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.GradientPaintContext",
	"java.lang.Object",
	"java.awt.PaintContext",
	_GradientPaintContext_FieldInfo_,
	_GradientPaintContext_MethodInfo_
};

$Object* allocate$GradientPaintContext($Class* clazz) {
	return $of($alloc(GradientPaintContext));
}

$ColorModel* GradientPaintContext::xrgbmodel = nullptr;
$ColorModel* GradientPaintContext::xbgrmodel = nullptr;
$ColorModel* GradientPaintContext::cachedModel = nullptr;
$WeakReference* GradientPaintContext::cached = nullptr;

$Raster* GradientPaintContext::getCachedRaster($ColorModel* cm, int32_t w, int32_t h) {
	$load(GradientPaintContext);
	$synchronized(class$) {
		$init(GradientPaintContext);
		if (cm == GradientPaintContext::cachedModel) {
			if (GradientPaintContext::cached != nullptr) {
				$var($Raster, ras, $cast($Raster, $nc(GradientPaintContext::cached)->get()));
				bool var$0 = ras != nullptr && ras->getWidth() >= w;
				if (var$0 && ras->getHeight() >= h) {
					$assignStatic(GradientPaintContext::cached, nullptr);
					return ras;
				}
			}
		}
		return $nc(cm)->createCompatibleWritableRaster(w, h);
	}
}

void GradientPaintContext::putCachedRaster($ColorModel* cm, $Raster* ras) {
	$load(GradientPaintContext);
	$synchronized(class$) {
		$init(GradientPaintContext);
		if (GradientPaintContext::cached != nullptr) {
			$var($Raster, cras, $cast($Raster, $nc(GradientPaintContext::cached)->get()));
			if (cras != nullptr) {
				int32_t cw = cras->getWidth();
				int32_t ch = cras->getHeight();
				int32_t iw = $nc(ras)->getWidth();
				int32_t ih = ras->getHeight();
				if (cw >= iw && ch >= ih) {
					return;
				}
				if (cw * ch >= iw * ih) {
					return;
				}
			}
		}
		$assignStatic(GradientPaintContext::cachedModel, cm);
		$assignStatic(GradientPaintContext::cached, $new($WeakReference, ras));
	}
}

void GradientPaintContext::init$($ColorModel* cm, $Point2D* p1$renamed, $Point2D* p2$renamed, $AffineTransform* xform, $Color* c1$renamed, $Color* c2$renamed, bool cyclic) {
	$useLocalCurrentObjectStackCache();
	$var($Point2D, p1, p1$renamed);
	$var($Point2D, p2, p2$renamed);
	$var($Color, c1, c1$renamed);
	$var($Color, c2, c2$renamed);
	$var($Point2D, xvec, $new($Point2D$Double, (double)1, (double)0));
	$var($Point2D, yvec, $new($Point2D$Double, (double)0, (double)1));
	try {
		$var($AffineTransform, inverse, $nc(xform)->createInverse());
		$nc(inverse)->deltaTransform(xvec, xvec);
		inverse->deltaTransform(yvec, yvec);
	} catch ($NoninvertibleTransformException& e) {
		xvec->setLocation((double)0, (double)0);
		yvec->setLocation((double)0, (double)0);
	}
	double var$0 = $nc(p2)->getX();
	double udx = var$0 - $nc(p1)->getX();
	double var$1 = p2->getY();
	double udy = var$1 - p1->getY();
	double ulenSq = udx * udx + udy * udy;
	$init($Double);
	if (ulenSq <= $Double::MIN_VALUE) {
		this->dx = (double)0;
		this->dy = (double)0;
	} else {
		double var$2 = xvec->getX() * udx;
		this->dx = (var$2 + xvec->getY() * udy) / ulenSq;
		double var$3 = yvec->getX() * udx;
		this->dy = (var$3 + yvec->getY() * udy) / ulenSq;
		if (cyclic) {
			this->dx = $Double::mod(this->dx, 1.0);
			this->dy = $Double::mod(this->dy, 1.0);
		} else if (this->dx < 0) {
			$var($Point2D, p, p1);
			$assign(p1, p2);
			$assign(p2, p);
			$var($Color, c, c1);
			$assign(c1, c2);
			$assign(c2, c);
			this->dx = -this->dx;
			this->dy = -this->dy;
		}
	}
	$var($Point2D, dp1, $nc(xform)->transform(p1, nullptr));
	this->x1 = $nc(dp1)->getX();
	this->y1 = dp1->getY();
	this->cyclic = cyclic;
	int32_t rgb1 = $nc(c1)->getRGB();
	int32_t rgb2 = $nc(c2)->getRGB();
	int32_t a1 = (int32_t)((rgb1 >> 24) & (uint32_t)255);
	int32_t r1 = (int32_t)((rgb1 >> 16) & (uint32_t)255);
	int32_t g1 = (int32_t)((rgb1 >> 8) & (uint32_t)255);
	int32_t b1 = (int32_t)((rgb1) & (uint32_t)255);
	int32_t da = ((int32_t)((rgb2 >> 24) & (uint32_t)255)) - a1;
	int32_t dr = ((int32_t)((rgb2 >> 16) & (uint32_t)255)) - r1;
	int32_t dg = ((int32_t)((rgb2 >> 8) & (uint32_t)255)) - g1;
	int32_t db = ((int32_t)((rgb2) & (uint32_t)255)) - b1;
	if (a1 == 255 && da == 0) {
		$set(this, model, GradientPaintContext::xrgbmodel);
		if ($instanceOf($DirectColorModel, cm)) {
			$var($DirectColorModel, dcm, $cast($DirectColorModel, cm));
			int32_t tmp = $nc(dcm)->getAlphaMask();
			bool var$5 = (tmp == 0 || tmp == 255) && dcm->getRedMask() == 255;
			bool var$4 = var$5 && dcm->getGreenMask() == 0x0000FF00;
			if (var$4 && dcm->getBlueMask() == 0x00FF0000) {
				$set(this, model, GradientPaintContext::xbgrmodel);
				tmp = r1;
				r1 = b1;
				b1 = tmp;
				tmp = dr;
				dr = db;
				db = tmp;
			}
		}
	} else {
		$set(this, model, $ColorModel::getRGBdefault());
	}
	$set(this, interp, $new($ints, cyclic ? 513 : 257));
	for (int32_t i = 0; i <= 256; ++i) {
		float rel = i / 256.0f;
		int32_t rgb = (((($cast(int32_t, (a1 + da * rel))) << 24) | (($cast(int32_t, (r1 + dr * rel))) << 16)) | (($cast(int32_t, (g1 + dg * rel))) << 8)) | ($cast(int32_t, (b1 + db * rel)));
		$nc(this->interp)->set(i, rgb);
		if (cyclic) {
			$nc(this->interp)->set(512 - i, rgb);
		}
	}
}

void GradientPaintContext::dispose() {
	if (this->saved != nullptr) {
		putCachedRaster(this->model, this->saved);
		$set(this, saved, nullptr);
	}
}

$ColorModel* GradientPaintContext::getColorModel() {
	return this->model;
}

$Raster* GradientPaintContext::getRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	double rowrel = (x - this->x1) * this->dx + (y - this->y1) * this->dy;
	$var($Raster, rast, this->saved);
	bool var$0 = rast == nullptr || $nc(rast)->getWidth() < w;
	if (var$0 || $nc(rast)->getHeight() < h) {
		$assign(rast, getCachedRaster(this->model, w, h));
		$set(this, saved, rast);
	}
	$var($IntegerComponentRaster, irast, $cast($IntegerComponentRaster, rast));
	int32_t off = $nc(irast)->getDataOffset(0);
	int32_t adjust = irast->getScanlineStride() - w;
	$var($ints, pixels, irast->getDataStorage());
	if (this->cyclic) {
		cycleFillRaster(pixels, off, adjust, w, h, rowrel, this->dx, this->dy);
	} else {
		clipFillRaster(pixels, off, adjust, w, h, rowrel, this->dx, this->dy);
	}
	irast->markDirty();
	return rast;
}

void GradientPaintContext::cycleFillRaster($ints* pixels, int32_t off, int32_t adjust, int32_t w, int32_t h, double rowrel, double dx, double dy) {
	rowrel = $Double::mod(rowrel, 2.0);
	int32_t irowrel = ($cast(int32_t, (rowrel * (1 << 30)))) << 1;
	int32_t idx = $cast(int32_t, (-dx * (1 << 31)));
	int32_t idy = $cast(int32_t, (-dy * (1 << 31)));
	while (--h >= 0) {
		int32_t icolrel = irowrel;
		for (int32_t j = w; j > 0; --j) {
			$nc(pixels)->set(off++, $nc(this->interp)->get((int32_t)((uint32_t)icolrel >> 23)));
			icolrel += idx;
		}
		off += adjust;
		irowrel += idy;
	}
}

void GradientPaintContext::clipFillRaster($ints* pixels, int32_t off, int32_t adjust, int32_t w, int32_t h, double rowrel, double dx, double dy) {
	while (--h >= 0) {
		double colrel = rowrel;
		int32_t j = w;
		if (colrel <= 0.0) {
			int32_t rgb = $nc(this->interp)->get(0);
			do {
				$nc(pixels)->set(off++, rgb);
				colrel += dx;
			} while (--j > 0 && colrel <= 0.0);
		}
		while (colrel < 1.0 && --j >= 0) {
			$nc(pixels)->set(off++, $nc(this->interp)->get($cast(int32_t, (colrel * 256))));
			colrel += dx;
		}
		if (j > 0) {
			int32_t rgb = $nc(this->interp)->get(256);
			do {
				$nc(pixels)->set(off++, rgb);
			} while (--j > 0);
		}
		off += adjust;
		rowrel += dy;
	}
}

void clinit$GradientPaintContext($Class* class$) {
	$assignStatic(GradientPaintContext::xrgbmodel, $new($DirectColorModel, 24, 0x00FF0000, 0x0000FF00, 255));
	$assignStatic(GradientPaintContext::xbgrmodel, $new($DirectColorModel, 24, 255, 0x0000FF00, 0x00FF0000));
}

GradientPaintContext::GradientPaintContext() {
}

$Class* GradientPaintContext::load$($String* name, bool initialize) {
	$loadClass(GradientPaintContext, name, initialize, &_GradientPaintContext_ClassInfo_, clinit$GradientPaintContext, allocate$GradientPaintContext);
	return class$;
}

$Class* GradientPaintContext::class$ = nullptr;

	} // awt
} // java