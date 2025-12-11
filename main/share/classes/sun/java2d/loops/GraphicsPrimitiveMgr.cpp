#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
#include <sun/awt/SunHints.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/CustomComponent.h>
#include <sun/java2d/loops/GeneralRenderer.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr$1.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr$2.h>
#include <sun/java2d/loops/GraphicsPrimitiveMgr$PrimitiveSpec.h>
#include <sun/java2d/loops/GraphicsPrimitiveProxy.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <sun/java2d/loops/XORComposite.h>
#include <jcpp.h>

#undef AT
#undef CT
#undef GP
#undef SG2D
#undef ST

using $GraphicsPrimitiveArray = $Array<::sun::java2d::loops::GraphicsPrimitive>;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Arrays = ::java::util::Arrays;
using $Comparator = ::java::util::Comparator;
using $SunHints = ::sun::awt::SunHints;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $CustomComponent = ::sun::java2d::loops::CustomComponent;
using $GeneralRenderer = ::sun::java2d::loops::GeneralRenderer;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $GraphicsPrimitiveMgr$1 = ::sun::java2d::loops::GraphicsPrimitiveMgr$1;
using $GraphicsPrimitiveMgr$2 = ::sun::java2d::loops::GraphicsPrimitiveMgr$2;
using $GraphicsPrimitiveMgr$PrimitiveSpec = ::sun::java2d::loops::GraphicsPrimitiveMgr$PrimitiveSpec;
using $GraphicsPrimitiveProxy = ::sun::java2d::loops::GraphicsPrimitiveProxy;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;
using $XORComposite = ::sun::java2d::loops::XORComposite;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _GraphicsPrimitiveMgr_FieldInfo_[] = {
	{"debugTrace", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GraphicsPrimitiveMgr, debugTrace)},
	{"primitives", "[Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsPrimitiveMgr, primitives)},
	{"generalPrimitives", "[Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsPrimitiveMgr, generalPrimitives)},
	{"needssort", "Z", nullptr, $PRIVATE | $STATIC, $staticField(GraphicsPrimitiveMgr, needssort)},
	{"primSorter", "Ljava/util/Comparator;", "Ljava/util/Comparator<Lsun/java2d/loops/GraphicsPrimitive;>;", $PRIVATE | $STATIC, $staticField(GraphicsPrimitiveMgr, primSorter)},
	{"primFinder", "Ljava/util/Comparator;", "Ljava/util/Comparator<Ljava/lang/Object;>;", $PRIVATE | $STATIC, $staticField(GraphicsPrimitiveMgr, primFinder)},
	{}
};

$MethodInfo _GraphicsPrimitiveMgr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GraphicsPrimitiveMgr::*)()>(&GraphicsPrimitiveMgr::init$))},
	{"initIDs", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($Class*,$Class*,$Class*,$Class*,$Class*,$Class*,$Class*,$Class*,$Class*,$Class*,$Class*)>(&GraphicsPrimitiveMgr::initIDs))},
	{"locate", "(ILsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$GraphicsPrimitive*(*)(int32_t,$SurfaceType*)>(&GraphicsPrimitiveMgr::locate))},
	{"locate", "(ILsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$GraphicsPrimitive*(*)(int32_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&GraphicsPrimitiveMgr::locate))},
	{"locate", "(Lsun/java2d/loops/GraphicsPrimitiveMgr$PrimitiveSpec;)Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$GraphicsPrimitive*(*)($GraphicsPrimitiveMgr$PrimitiveSpec*)>(&GraphicsPrimitiveMgr::locate))},
	{"locateGeneral", "(I)Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$GraphicsPrimitive*(*)(int32_t)>(&GraphicsPrimitiveMgr::locateGeneral))},
	{"locatePrim", "(ILsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$GraphicsPrimitive*(*)(int32_t,$SurfaceType*,$CompositeType*,$SurfaceType*)>(&GraphicsPrimitiveMgr::locatePrim))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&GraphicsPrimitiveMgr::main))},
	{"register", "([Lsun/java2d/loops/GraphicsPrimitive;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($GraphicsPrimitiveArray*)>(&GraphicsPrimitiveMgr::register$))},
	{"registerGeneral", "(Lsun/java2d/loops/GraphicsPrimitive;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($GraphicsPrimitive*)>(&GraphicsPrimitiveMgr::registerGeneral))},
	{"registerNativeLoops", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&GraphicsPrimitiveMgr::registerNativeLoops))},
	{"testPrimitiveInstantiation", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&GraphicsPrimitiveMgr::testPrimitiveInstantiation))},
	{"testPrimitiveInstantiation", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&GraphicsPrimitiveMgr::testPrimitiveInstantiation))},
	{"writeLog", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&GraphicsPrimitiveMgr::writeLog))},
	{}
};

#define _METHOD_INDEX_initIDs 1
#define _METHOD_INDEX_registerNativeLoops 10

$InnerClassInfo _GraphicsPrimitiveMgr_InnerClassesInfo_[] = {
	{"sun.java2d.loops.GraphicsPrimitiveMgr$PrimitiveSpec", "sun.java2d.loops.GraphicsPrimitiveMgr", "PrimitiveSpec", $PRIVATE | $STATIC},
	{"sun.java2d.loops.GraphicsPrimitiveMgr$2", nullptr, nullptr, 0},
	{"sun.java2d.loops.GraphicsPrimitiveMgr$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GraphicsPrimitiveMgr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.loops.GraphicsPrimitiveMgr",
	"java.lang.Object",
	nullptr,
	_GraphicsPrimitiveMgr_FieldInfo_,
	_GraphicsPrimitiveMgr_MethodInfo_,
	nullptr,
	nullptr,
	_GraphicsPrimitiveMgr_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.loops.GraphicsPrimitiveMgr$PrimitiveSpec,sun.java2d.loops.GraphicsPrimitiveMgr$2,sun.java2d.loops.GraphicsPrimitiveMgr$1"
};

$Object* allocate$GraphicsPrimitiveMgr($Class* clazz) {
	return $of($alloc(GraphicsPrimitiveMgr));
}

$GraphicsPrimitiveArray* GraphicsPrimitiveMgr::primitives = nullptr;
$GraphicsPrimitiveArray* GraphicsPrimitiveMgr::generalPrimitives = nullptr;
bool GraphicsPrimitiveMgr::needssort = false;
$Comparator* GraphicsPrimitiveMgr::primSorter = nullptr;
$Comparator* GraphicsPrimitiveMgr::primFinder = nullptr;

void GraphicsPrimitiveMgr::initIDs($Class* GP, $Class* ST, $Class* CT, $Class* SG2D, $Class* Color, $Class* AT, $Class* XORComp, $Class* AlphaComp, $Class* Path2D, $Class* Path2DFloat, $Class* SHints) {
	$init(GraphicsPrimitiveMgr);
	$prepareNativeStatic(GraphicsPrimitiveMgr, initIDs, void, $Class* GP, $Class* ST, $Class* CT, $Class* SG2D, $Class* Color, $Class* AT, $Class* XORComp, $Class* AlphaComp, $Class* Path2D, $Class* Path2DFloat, $Class* SHints);
	$invokeNativeStatic(GP, ST, CT, SG2D, Color, AT, XORComp, AlphaComp, Path2D, Path2DFloat, SHints);
	$finishNativeStatic();
}

void GraphicsPrimitiveMgr::registerNativeLoops() {
	$init(GraphicsPrimitiveMgr);
	$prepareNativeStatic(GraphicsPrimitiveMgr, registerNativeLoops, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void GraphicsPrimitiveMgr::init$() {
}

void GraphicsPrimitiveMgr::register$($GraphicsPrimitiveArray* newPrimitives) {
	$load(GraphicsPrimitiveMgr);
	$synchronized(class$) {
		$init(GraphicsPrimitiveMgr);
		$useLocalCurrentObjectStackCache();
		$var($GraphicsPrimitiveArray, devCollection, GraphicsPrimitiveMgr::primitives);
		int32_t oldSize = 0;
		int32_t newSize = $nc(newPrimitives)->length;
		if (devCollection != nullptr) {
			oldSize = devCollection->length;
		}
		$var($GraphicsPrimitiveArray, temp, $new($GraphicsPrimitiveArray, oldSize + newSize));
		if (devCollection != nullptr) {
			$System::arraycopy(devCollection, 0, temp, 0, oldSize);
		}
		$System::arraycopy(newPrimitives, 0, temp, oldSize, newSize);
		GraphicsPrimitiveMgr::needssort = true;
		$assignStatic(GraphicsPrimitiveMgr::primitives, temp);
	}
}

void GraphicsPrimitiveMgr::registerGeneral($GraphicsPrimitive* gen) {
	$load(GraphicsPrimitiveMgr);
	$synchronized(class$) {
		$init(GraphicsPrimitiveMgr);
		if (GraphicsPrimitiveMgr::generalPrimitives == nullptr) {
			$assignStatic(GraphicsPrimitiveMgr::generalPrimitives, $new($GraphicsPrimitiveArray, {gen}));
			return;
		}
		int32_t len = $nc(GraphicsPrimitiveMgr::generalPrimitives)->length;
		$var($GraphicsPrimitiveArray, newGen, $new($GraphicsPrimitiveArray, len + 1));
		$System::arraycopy(GraphicsPrimitiveMgr::generalPrimitives, 0, newGen, 0, len);
		newGen->set(len, gen);
		$assignStatic(GraphicsPrimitiveMgr::generalPrimitives, newGen);
	}
}

$GraphicsPrimitive* GraphicsPrimitiveMgr::locate(int32_t primTypeID, $SurfaceType* dsttype) {
	$load(GraphicsPrimitiveMgr);
	$synchronized(class$) {
		$init(GraphicsPrimitiveMgr);
		$init($SurfaceType);
		$init($CompositeType);
		return locate(primTypeID, $SurfaceType::OpaqueColor, $CompositeType::Src, dsttype);
	}
}

$GraphicsPrimitive* GraphicsPrimitiveMgr::locate(int32_t primTypeID, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$load(GraphicsPrimitiveMgr);
	$synchronized(class$) {
		$init(GraphicsPrimitiveMgr);
		$var($GraphicsPrimitive, prim, locatePrim(primTypeID, srctype, comptype, dsttype));
		if (prim == nullptr) {
			$assign(prim, locateGeneral(primTypeID));
			if (prim != nullptr) {
				$assign(prim, prim->makePrimitive(srctype, comptype, dsttype));
				if (prim != nullptr && $GraphicsPrimitive::traceflags != 0) {
					$assign(prim, prim->traceWrap());
				}
			}
		}
		return prim;
	}
}

$GraphicsPrimitive* GraphicsPrimitiveMgr::locatePrim(int32_t primTypeID, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$load(GraphicsPrimitiveMgr);
	$synchronized(class$) {
		$init(GraphicsPrimitiveMgr);
		$useLocalCurrentObjectStackCache();
		$var($SurfaceType, src, nullptr);
		$var($SurfaceType, dst, nullptr);
		$var($CompositeType, cmp, nullptr);
		$var($GraphicsPrimitive, prim, nullptr);
		$var($GraphicsPrimitiveMgr$PrimitiveSpec, spec, $new($GraphicsPrimitiveMgr$PrimitiveSpec));
		for ($assign(dst, dsttype); dst != nullptr; $assign(dst, $nc(dst)->getSuperType())) {
			for ($assign(src, srctype); src != nullptr; $assign(src, $nc(src)->getSuperType())) {
				for ($assign(cmp, comptype); cmp != nullptr; $assign(cmp, $nc(cmp)->getSuperType())) {
					spec->uniqueID = $GraphicsPrimitive::makeUniqueID(primTypeID, src, cmp, dst);
					$assign(prim, locate(spec));
					if (prim != nullptr) {
						return prim;
					}
				}
			}
		}
		return nullptr;
	}
}

$GraphicsPrimitive* GraphicsPrimitiveMgr::locateGeneral(int32_t primTypeID) {
	$init(GraphicsPrimitiveMgr);
	$useLocalCurrentObjectStackCache();
	if (GraphicsPrimitiveMgr::generalPrimitives == nullptr) {
		return nullptr;
	}
	for (int32_t i = 0; i < $nc(GraphicsPrimitiveMgr::generalPrimitives)->length; ++i) {
		$var($GraphicsPrimitive, prim, $nc(GraphicsPrimitiveMgr::generalPrimitives)->get(i));
		if ($nc(prim)->getPrimTypeID() == primTypeID) {
			return prim;
		}
	}
	return nullptr;
}

$GraphicsPrimitive* GraphicsPrimitiveMgr::locate($GraphicsPrimitiveMgr$PrimitiveSpec* spec) {
	$init(GraphicsPrimitiveMgr);
	$useLocalCurrentObjectStackCache();
	if (GraphicsPrimitiveMgr::needssort) {
		$init($GraphicsPrimitive);
		if ($GraphicsPrimitive::traceflags != 0) {
			for (int32_t i = 0; i < $nc(GraphicsPrimitiveMgr::primitives)->length; ++i) {
				$nc(GraphicsPrimitiveMgr::primitives)->set(i, $($nc($nc(GraphicsPrimitiveMgr::primitives)->get(i))->traceWrap()));
			}
		}
		$Arrays::sort(GraphicsPrimitiveMgr::primitives, GraphicsPrimitiveMgr::primSorter);
		GraphicsPrimitiveMgr::needssort = false;
	}
	$var($GraphicsPrimitiveArray, devCollection, GraphicsPrimitiveMgr::primitives);
	if (devCollection == nullptr) {
		return nullptr;
	}
	int32_t index = $Arrays::binarySearch(devCollection, spec, GraphicsPrimitiveMgr::primFinder);
	if (index >= 0) {
		$var($GraphicsPrimitive, prim, $nc(devCollection)->get(index));
		if ($instanceOf($GraphicsPrimitiveProxy, prim)) {
			$assign(prim, $nc(($cast($GraphicsPrimitiveProxy, prim)))->instantiate());
			devCollection->set(index, prim);
		}
		return prim;
	}
	return nullptr;
}

void GraphicsPrimitiveMgr::writeLog($String* str) {
	$init(GraphicsPrimitiveMgr);
}

void GraphicsPrimitiveMgr::testPrimitiveInstantiation() {
	$init(GraphicsPrimitiveMgr);
	testPrimitiveInstantiation(false);
}

void GraphicsPrimitiveMgr::testPrimitiveInstantiation(bool verbose) {
	$init(GraphicsPrimitiveMgr);
	$useLocalCurrentObjectStackCache();
	int32_t resolved = 0;
	int32_t unresolved = 0;
	$var($GraphicsPrimitiveArray, prims, GraphicsPrimitiveMgr::primitives);
	for (int32_t j = 0; j < $nc(prims)->length; ++j) {
		$var($GraphicsPrimitive, p, prims->get(j));
		if ($instanceOf($GraphicsPrimitiveProxy, p)) {
			$var($GraphicsPrimitive, r, $nc(($cast($GraphicsPrimitiveProxy, p)))->instantiate());
			bool var$0 = !$nc($($nc(r)->getSignature()))->equals($($nc(p)->getSignature()));
			if (!var$0) {
				int32_t var$1 = $nc(r)->getUniqueID();
				var$0 = var$1 != $nc(p)->getUniqueID();
			}
			if (var$0) {
				$nc($System::out)->println($$str({"r.getSignature == "_s, $(r->getSignature())}));
				$nc($System::out)->println($$str({"r.getUniqueID == "_s, $$str(r->getUniqueID())}));
				$nc($System::out)->println($$str({"p.getSignature == "_s, $(p->getSignature())}));
				$nc($System::out)->println($$str({"p.getUniqueID == "_s, $$str(p->getUniqueID())}));
				$var($String, var$2, $$str({"Primitive "_s, p, " returns wrong signature for "_s}));
				$throwNew($RuntimeException, $$concat(var$2, $($of(r)->getClass())));
			}
			++unresolved;
			$assign(p, r);
			if (verbose) {
				$nc($System::out)->println($of(p));
			}
		} else {
			if (verbose) {
				$nc($System::out)->println($$str({p, " (not proxied)."_s}));
			}
			++resolved;
		}
	}
	$nc($System::out)->println($$str({$$str(resolved), " graphics primitives were not proxied."_s}));
	$nc($System::out)->println($$str({$$str(unresolved), " proxied graphics primitives resolved correctly."_s}));
	$nc($System::out)->println($$str({$$str(resolved), $$str(unresolved), " total graphics primitives"_s}));
}

void GraphicsPrimitiveMgr::main($StringArray* argv) {
	$init(GraphicsPrimitiveMgr);
	if (GraphicsPrimitiveMgr::needssort) {
		$Arrays::sort(GraphicsPrimitiveMgr::primitives, GraphicsPrimitiveMgr::primSorter);
		GraphicsPrimitiveMgr::needssort = false;
	}
	testPrimitiveInstantiation($nc(argv)->length > 0);
}

void clinit$GraphicsPrimitiveMgr($Class* class$) {
	GraphicsPrimitiveMgr::needssort = true;
	{
		$load($GraphicsPrimitive);
		$load($SurfaceType);
		$load($CompositeType);
		$load($SunGraphics2D);
		$load($Color);
		$load($AffineTransform);
		$load($XORComposite);
		$load($AlphaComposite);
		$load($Path2D);
		$load($Path2D$Float);
		$load($SunHints);
		GraphicsPrimitiveMgr::initIDs($GraphicsPrimitive::class$, $SurfaceType::class$, $CompositeType::class$, $SunGraphics2D::class$, $Color::class$, $AffineTransform::class$, $XORComposite::class$, $AlphaComposite::class$, $Path2D::class$, $Path2D$Float::class$, $SunHints::class$);
		$CustomComponent::register$();
		$GeneralRenderer::register$();
		GraphicsPrimitiveMgr::registerNativeLoops();
	}
	$assignStatic(GraphicsPrimitiveMgr::primSorter, $new($GraphicsPrimitiveMgr$1));
	$assignStatic(GraphicsPrimitiveMgr::primFinder, $new($GraphicsPrimitiveMgr$2));
}

GraphicsPrimitiveMgr::GraphicsPrimitiveMgr() {
}

$Class* GraphicsPrimitiveMgr::load$($String* name, bool initialize) {
	$loadClass(GraphicsPrimitiveMgr, name, initialize, &_GraphicsPrimitiveMgr_ClassInfo_, clinit$GraphicsPrimitiveMgr, allocate$GraphicsPrimitiveMgr);
	return class$;
}

$Class* GraphicsPrimitiveMgr::class$ = nullptr;

		} // loops
	} // java2d
} // sun