#include <javax/swing/plaf/nimbus/NimbusDefaults$LazyPainter.h>

#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults.h>
#include <jcpp.h>

#undef TYPE

using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Constructor = ::java::lang::reflect::Constructor;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $AbstractRegionPainter = ::javax::swing::plaf::nimbus::AbstractRegionPainter;
using $AbstractRegionPainter$PaintContext = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext;
using $AbstractRegionPainter$PaintContext$CacheMode = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode;
using $NimbusDefaults = ::javax::swing::plaf::nimbus::NimbusDefaults;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusDefaults$LazyPainter_FieldInfo_[] = {
	{"which", "I", nullptr, $PRIVATE, $field(NimbusDefaults$LazyPainter, which)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(NimbusDefaults$LazyPainter, ctx)},
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NimbusDefaults$LazyPainter, className)},
	{}
};

$MethodInfo _NimbusDefaults$LazyPainter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/awt/Insets;Ljava/awt/Dimension;Z)V", nullptr, 0, $method(static_cast<void(NimbusDefaults$LazyPainter::*)($String*,int32_t,$Insets*,$Dimension*,bool)>(&NimbusDefaults$LazyPainter::init$))},
	{"<init>", "(Ljava/lang/String;ILjava/awt/Insets;Ljava/awt/Dimension;ZLjavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode;DD)V", nullptr, 0, $method(static_cast<void(NimbusDefaults$LazyPainter::*)($String*,int32_t,$Insets*,$Dimension*,bool,$AbstractRegionPainter$PaintContext$CacheMode*,double,double)>(&NimbusDefaults$LazyPainter::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NimbusDefaults$LazyPainter_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusDefaults$LazyPainter", "javax.swing.plaf.nimbus.NimbusDefaults", "LazyPainter", $PRIVATE | $STATIC | $FINAL},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _NimbusDefaults$LazyPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusDefaults$LazyPainter",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_NimbusDefaults$LazyPainter_FieldInfo_,
	_NimbusDefaults$LazyPainter_MethodInfo_,
	nullptr,
	nullptr,
	_NimbusDefaults$LazyPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusDefaults"
};

$Object* allocate$NimbusDefaults$LazyPainter($Class* clazz) {
	return $of($alloc(NimbusDefaults$LazyPainter));
}

void NimbusDefaults$LazyPainter::init$($String* className, int32_t which, $Insets* insets, $Dimension* canvasSize, bool inverted) {
	if (className == nullptr) {
		$throwNew($IllegalArgumentException, "The className must be specified"_s);
	}
	$set(this, className, className);
	this->which = which;
	$set(this, ctx, $new($AbstractRegionPainter$PaintContext, insets, canvasSize, inverted));
}

void NimbusDefaults$LazyPainter::init$($String* className, int32_t which, $Insets* insets, $Dimension* canvasSize, bool inverted, $AbstractRegionPainter$PaintContext$CacheMode* cacheMode, double maxH, double maxV) {
	if (className == nullptr) {
		$throwNew($IllegalArgumentException, "The className must be specified"_s);
	}
	$set(this, className, className);
	this->which = which;
	$set(this, ctx, $new($AbstractRegionPainter$PaintContext, insets, canvasSize, inverted, cacheMode, maxH, maxV));
}

$Object* NimbusDefaults$LazyPainter::createValue($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$Class* c = nullptr;
		$var($Object, cl, nullptr);
		if (table == nullptr || !($instanceOf($ClassLoader, $assign(cl, $nc(table)->get("ClassLoader"_s))))) {
			$assign(cl, $($Thread::currentThread())->getContextClassLoader());
			if (cl == nullptr) {
				$assign(cl, $ClassLoader::getSystemClassLoader());
			}
		}
		c = $Class::forName(this->className, true, $cast($ClassLoader, cl));
			$load($AbstractRegionPainter$PaintContext);
			$init($Integer);
		$var($Constructor, constructor, $nc(c)->getConstructor($$new($ClassArray, {
			$AbstractRegionPainter$PaintContext::class$,
			$Integer::TYPE
		})));
		if (constructor == nullptr) {
			$throwNew($NullPointerException, $$str({"Failed to find the constructor for the class: "_s, this->className}));
		}
		return $of($nc(constructor)->newInstance($$new($ObjectArray, {
			$of(this->ctx),
			$($of($Integer::valueOf(this->which)))
		})));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		e->printStackTrace();
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

NimbusDefaults$LazyPainter::NimbusDefaults$LazyPainter() {
}

$Class* NimbusDefaults$LazyPainter::load$($String* name, bool initialize) {
	$loadClass(NimbusDefaults$LazyPainter, name, initialize, &_NimbusDefaults$LazyPainter_ClassInfo_, allocate$NimbusDefaults$LazyPainter);
	return class$;
}

$Class* NimbusDefaults$LazyPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax