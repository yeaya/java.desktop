#include <sun/java2d/loops/Blit$GeneralXorBlit.h>

#include <java/awt/Composite.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/Blit.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $Composite = ::java::awt::Composite;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Blit = ::sun::java2d::loops::Blit;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitive$GeneralBinaryOp = ::sun::java2d::loops::GraphicsPrimitive$GeneralBinaryOp;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _Blit$GeneralXorBlit_FieldInfo_[] = {
	{"convertsrc", "Lsun/java2d/loops/Blit;", nullptr, 0, $field(Blit$GeneralXorBlit, convertsrc)},
	{"convertdst", "Lsun/java2d/loops/Blit;", nullptr, 0, $field(Blit$GeneralXorBlit, convertdst)},
	{"performop", "Lsun/java2d/loops/Blit;", nullptr, 0, $field(Blit$GeneralXorBlit, performop)},
	{"convertresult", "Lsun/java2d/loops/Blit;", nullptr, 0, $field(Blit$GeneralXorBlit, convertresult)},
	{"srcTmp", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/java2d/SurfaceData;>;", 0, $field(Blit$GeneralXorBlit, srcTmp)},
	{"dstTmp", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/java2d/SurfaceData;>;", 0, $field(Blit$GeneralXorBlit, dstTmp)},
	{}
};

$MethodInfo _Blit$GeneralXorBlit_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getCompositeType", "()Lsun/java2d/loops/CompositeType;", nullptr, $PUBLIC | $FINAL},
	{"*getDestType", "()Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $FINAL},
	{"*getPrimTypeID", "()I", nullptr, $PUBLIC | $FINAL},
	{"*getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*getSourceType", "()Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", nullptr, $PUBLIC, $method(static_cast<void(Blit$GeneralXorBlit::*)($SurfaceType*,$CompositeType*,$SurfaceType*)>(&Blit$GeneralXorBlit::init$))},
	{"Blit", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;Ljava/awt/Composite;Lsun/java2d/pipe/Region;IIIIII)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setPrimitives", "(Lsun/java2d/loops/Blit;Lsun/java2d/loops/Blit;Lsun/java2d/loops/GraphicsPrimitive;Lsun/java2d/loops/Blit;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Blit$GeneralXorBlit_InnerClassesInfo_[] = {
	{"sun.java2d.loops.Blit$GeneralXorBlit", "sun.java2d.loops.Blit", "GeneralXorBlit", $PRIVATE | $STATIC},
	{"sun.java2d.loops.GraphicsPrimitive$GeneralBinaryOp", "sun.java2d.loops.GraphicsPrimitive", "GeneralBinaryOp", $PROTECTED | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Blit$GeneralXorBlit_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.Blit$GeneralXorBlit",
	"sun.java2d.loops.Blit",
	"sun.java2d.loops.GraphicsPrimitive$GeneralBinaryOp",
	_Blit$GeneralXorBlit_FieldInfo_,
	_Blit$GeneralXorBlit_MethodInfo_,
	nullptr,
	nullptr,
	_Blit$GeneralXorBlit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.Blit"
};

$Object* allocate$Blit$GeneralXorBlit($Class* clazz) {
	return $of($alloc(Blit$GeneralXorBlit));
}

$String* Blit$GeneralXorBlit::getSignature() {
	 return this->$Blit::getSignature();
}

int32_t Blit$GeneralXorBlit::getPrimTypeID() {
	 return this->$Blit::getPrimTypeID();
}

$SurfaceType* Blit$GeneralXorBlit::getSourceType() {
	 return this->$Blit::getSourceType();
}

$CompositeType* Blit$GeneralXorBlit::getCompositeType() {
	 return this->$Blit::getCompositeType();
}

$SurfaceType* Blit$GeneralXorBlit::getDestType() {
	 return this->$Blit::getDestType();
}

$String* Blit$GeneralXorBlit::toString() {
	 return this->$Blit::toString();
}

int32_t Blit$GeneralXorBlit::hashCode() {
	 return this->$Blit::hashCode();
}

bool Blit$GeneralXorBlit::equals(Object$* arg0) {
	 return this->$Blit::equals(arg0);
}

$Object* Blit$GeneralXorBlit::clone() {
	 return this->$Blit::clone();
}

void Blit$GeneralXorBlit::finalize() {
	this->$Blit::finalize();
}

void Blit$GeneralXorBlit::init$($SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$Blit::init$(srctype, comptype, dsttype);
}

void Blit$GeneralXorBlit::setPrimitives($Blit* srcconverter, $Blit* dstconverter, $GraphicsPrimitive* genericop, $Blit* resconverter) {
	$set(this, convertsrc, srcconverter);
	$set(this, convertdst, dstconverter);
	$set(this, performop, $cast($Blit, genericop));
	$set(this, convertresult, resconverter);
}

void Blit$GeneralXorBlit::Blit$($SurfaceData* srcData, $SurfaceData* dstData, $Composite* comp, $Region* clip, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($SurfaceData, src, nullptr);
		$var($SurfaceData, dst, nullptr);
		$var($Region, opclip, nullptr);
		int32_t sx = 0;
		int32_t sy = 0;
		int32_t dx = 0;
		int32_t dy = 0;
		if (this->convertsrc == nullptr) {
			$assign(src, srcData);
			sx = srcx;
			sy = srcy;
		} else {
			$var($SurfaceData, cachedSrc, nullptr);
			if (this->srcTmp != nullptr) {
				$assign(cachedSrc, $cast($SurfaceData, $nc(this->srcTmp)->get()));
			}
			$assign(src, convertFrom(this->convertsrc, srcData, srcx, srcy, width, height, cachedSrc));
			sx = 0;
			sy = 0;
			if (src != cachedSrc) {
				$set(this, srcTmp, $new($WeakReference, src));
			}
		}
		if (this->convertdst == nullptr) {
			$assign(dst, dstData);
			dx = dstx;
			dy = dsty;
			$assign(opclip, clip);
		} else {
			$var($SurfaceData, cachedDst, nullptr);
			if (this->dstTmp != nullptr) {
				$assign(cachedDst, $cast($SurfaceData, $nc(this->dstTmp)->get()));
			}
			$assign(dst, convertFrom(this->convertdst, dstData, dstx, dsty, width, height, cachedDst));
			dx = 0;
			dy = 0;
			$assign(opclip, nullptr);
			if (dst != cachedDst) {
				$set(this, dstTmp, $new($WeakReference, dst));
			}
		}
		$nc(this->performop)->Blit$(src, dst, comp, opclip, sx, sy, dx, dy, width, height);
		if (this->convertresult != nullptr) {
			convertTo(this->convertresult, dst, dstData, clip, dstx, dsty, width, height);
		}
	}
}

Blit$GeneralXorBlit::Blit$GeneralXorBlit() {
}

$Class* Blit$GeneralXorBlit::load$($String* name, bool initialize) {
	$loadClass(Blit$GeneralXorBlit, name, initialize, &_Blit$GeneralXorBlit_ClassInfo_, allocate$Blit$GeneralXorBlit);
	return class$;
}

$Class* Blit$GeneralXorBlit::class$ = nullptr;

		} // loops
	} // java2d
} // sun