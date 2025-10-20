#include <javax/swing/plaf/nimbus/Effect.h>

#include <java/awt/image/BufferedImage.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/nimbus/Effect$ArrayCache.h>
#include <javax/swing/plaf/nimbus/Effect$EffectType.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Effect$ArrayCache = ::javax::swing::plaf::nimbus::Effect$ArrayCache;
using $Effect$EffectType = ::javax::swing::plaf::nimbus::Effect$EffectType;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$MethodInfo _Effect_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Effect::*)()>(&Effect::init$))},
	{"applyEffect", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;II)Ljava/awt/image/BufferedImage;", nullptr, $ABSTRACT},
	{"getArrayCache", "()Ljavax/swing/plaf/nimbus/Effect$ArrayCache;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Effect$ArrayCache*(*)()>(&Effect::getArrayCache))},
	{"getEffectType", "()Ljavax/swing/plaf/nimbus/Effect$EffectType;", nullptr, $ABSTRACT},
	{"getOpacity", "()F", nullptr, $ABSTRACT},
	{}
};

$InnerClassInfo _Effect_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.Effect$ArrayCache", "javax.swing.plaf.nimbus.Effect", "ArrayCache", $PROTECTED | $STATIC},
	{"javax.swing.plaf.nimbus.Effect$EffectType", "javax.swing.plaf.nimbus.Effect", "EffectType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Effect_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.nimbus.Effect",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Effect_MethodInfo_,
	nullptr,
	nullptr,
	_Effect_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.Effect$ArrayCache,javax.swing.plaf.nimbus.Effect$EffectType"
};

$Object* allocate$Effect($Class* clazz) {
	return $of($alloc(Effect));
}

void Effect::init$() {
}

$Effect$ArrayCache* Effect::getArrayCache() {
	$useLocalCurrentObjectStackCache();
	$load($Effect$ArrayCache);
	$var($Effect$ArrayCache, cache, $cast($Effect$ArrayCache, $nc($($AppContext::getAppContext()))->get($Effect$ArrayCache::class$)));
	if (cache == nullptr) {
		$assign(cache, $new($Effect$ArrayCache));
		$nc($($AppContext::getAppContext()))->put($Effect$ArrayCache::class$, cache);
	}
	return cache;
}

Effect::Effect() {
}

$Class* Effect::load$($String* name, bool initialize) {
	$loadClass(Effect, name, initialize, &_Effect_ClassInfo_, allocate$Effect);
	return class$;
}

$Class* Effect::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax