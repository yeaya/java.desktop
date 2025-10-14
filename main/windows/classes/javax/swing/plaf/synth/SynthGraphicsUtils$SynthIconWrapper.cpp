#include <javax/swing/plaf/synth/SynthGraphicsUtils$SynthIconWrapper.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthIcon.h>
#include <jcpp.h>

#undef CACHE

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Icon = ::javax::swing::Icon;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthIcon = ::javax::swing::plaf::synth::SynthIcon;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthGraphicsUtils$SynthIconWrapper_FieldInfo_[] = {
	{"CACHE", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/plaf/synth/SynthGraphicsUtils$SynthIconWrapper;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SynthGraphicsUtils$SynthIconWrapper, CACHE)},
	{"synthIcon", "Ljavax/swing/plaf/synth/SynthIcon;", nullptr, $PRIVATE, $field(SynthGraphicsUtils$SynthIconWrapper, synthIcon)},
	{"context", "Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $field(SynthGraphicsUtils$SynthIconWrapper, context)},
	{}
};

$MethodInfo _SynthGraphicsUtils$SynthIconWrapper_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthIcon;Ljavax/swing/plaf/synth/SynthContext;)V", nullptr, 0, $method(static_cast<void(SynthGraphicsUtils$SynthIconWrapper::*)($SynthIcon*,$SynthContext*)>(&SynthGraphicsUtils$SynthIconWrapper::init$))},
	{"get", "(Ljavax/swing/plaf/synth/SynthIcon;Ljavax/swing/plaf/synth/SynthContext;)Ljavax/swing/plaf/synth/SynthGraphicsUtils$SynthIconWrapper;", nullptr, $STATIC, $method(static_cast<SynthGraphicsUtils$SynthIconWrapper*(*)($SynthIcon*,$SynthContext*)>(&SynthGraphicsUtils$SynthIconWrapper::get))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"release", "(Ljavax/swing/plaf/synth/SynthGraphicsUtils$SynthIconWrapper;)V", nullptr, $STATIC, $method(static_cast<void(*)(SynthGraphicsUtils$SynthIconWrapper*)>(&SynthGraphicsUtils$SynthIconWrapper::release))},
	{"reset", "(Ljavax/swing/plaf/synth/SynthIcon;Ljavax/swing/plaf/synth/SynthContext;)V", nullptr, 0},
	{}
};

$InnerClassInfo _SynthGraphicsUtils$SynthIconWrapper_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthGraphicsUtils$SynthIconWrapper", "javax.swing.plaf.synth.SynthGraphicsUtils", "SynthIconWrapper", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SynthGraphicsUtils$SynthIconWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthGraphicsUtils$SynthIconWrapper",
	"java.lang.Object",
	"javax.swing.Icon",
	_SynthGraphicsUtils$SynthIconWrapper_FieldInfo_,
	_SynthGraphicsUtils$SynthIconWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_SynthGraphicsUtils$SynthIconWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthGraphicsUtils"
};

$Object* allocate$SynthGraphicsUtils$SynthIconWrapper($Class* clazz) {
	return $of($alloc(SynthGraphicsUtils$SynthIconWrapper));
}

$List* SynthGraphicsUtils$SynthIconWrapper::CACHE = nullptr;

SynthGraphicsUtils$SynthIconWrapper* SynthGraphicsUtils$SynthIconWrapper::get($SynthIcon* icon, $SynthContext* context) {
	$init(SynthGraphicsUtils$SynthIconWrapper);
	$synchronized(SynthGraphicsUtils$SynthIconWrapper::CACHE) {
		int32_t size = $nc(SynthGraphicsUtils$SynthIconWrapper::CACHE)->size();
		if (size > 0) {
			$var(SynthGraphicsUtils$SynthIconWrapper, wrapper, $cast(SynthGraphicsUtils$SynthIconWrapper, $nc(SynthGraphicsUtils$SynthIconWrapper::CACHE)->remove(size - 1)));
			$nc(wrapper)->reset(icon, context);
			return wrapper;
		}
	}
	return $new(SynthGraphicsUtils$SynthIconWrapper, icon, context);
}

void SynthGraphicsUtils$SynthIconWrapper::release(SynthGraphicsUtils$SynthIconWrapper* wrapper) {
	$init(SynthGraphicsUtils$SynthIconWrapper);
	$nc(wrapper)->reset(nullptr, nullptr);
	$synchronized(SynthGraphicsUtils$SynthIconWrapper::CACHE) {
		$nc(SynthGraphicsUtils$SynthIconWrapper::CACHE)->add(wrapper);
	}
}

void SynthGraphicsUtils$SynthIconWrapper::init$($SynthIcon* icon, $SynthContext* context) {
	reset(icon, context);
}

void SynthGraphicsUtils$SynthIconWrapper::reset($SynthIcon* icon, $SynthContext* context) {
	$set(this, synthIcon, icon);
	$set(this, context, context);
}

void SynthGraphicsUtils$SynthIconWrapper::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
}

int32_t SynthGraphicsUtils$SynthIconWrapper::getIconWidth() {
	return $nc(this->synthIcon)->getIconWidth(this->context);
}

int32_t SynthGraphicsUtils$SynthIconWrapper::getIconHeight() {
	return $nc(this->synthIcon)->getIconHeight(this->context);
}

void clinit$SynthGraphicsUtils$SynthIconWrapper($Class* class$) {
	$assignStatic(SynthGraphicsUtils$SynthIconWrapper::CACHE, $new($ArrayList, 1));
}

SynthGraphicsUtils$SynthIconWrapper::SynthGraphicsUtils$SynthIconWrapper() {
}

$Class* SynthGraphicsUtils$SynthIconWrapper::load$($String* name, bool initialize) {
	$loadClass(SynthGraphicsUtils$SynthIconWrapper, name, initialize, &_SynthGraphicsUtils$SynthIconWrapper_ClassInfo_, clinit$SynthGraphicsUtils$SynthIconWrapper, allocate$SynthGraphicsUtils$SynthIconWrapper);
	return class$;
}

$Class* SynthGraphicsUtils$SynthIconWrapper::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax