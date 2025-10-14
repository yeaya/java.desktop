#include <javax/swing/plaf/nimbus/NimbusDefaults$LazyStyle$Part.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults$LazyStyle.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NimbusDefaults$LazyStyle = ::javax::swing::plaf::nimbus::NimbusDefaults$LazyStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusDefaults$LazyStyle$Part_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/plaf/nimbus/NimbusDefaults$LazyStyle;", nullptr, $FINAL | $SYNTHETIC, $field(NimbusDefaults$LazyStyle$Part, this$1)},
	{"s", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NimbusDefaults$LazyStyle$Part, s)},
	{"named", "Z", nullptr, $PRIVATE, $field(NimbusDefaults$LazyStyle$Part, named)},
	{"c", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(NimbusDefaults$LazyStyle$Part, c)},
	{}
};

$MethodInfo _NimbusDefaults$LazyStyle$Part_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusDefaults$LazyStyle;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(NimbusDefaults$LazyStyle$Part::*)($NimbusDefaults$LazyStyle*,$String*)>(&NimbusDefaults$LazyStyle$Part::init$))},
	{}
};

$InnerClassInfo _NimbusDefaults$LazyStyle$Part_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusDefaults$LazyStyle", "javax.swing.plaf.nimbus.NimbusDefaults", "LazyStyle", $PRIVATE | $FINAL},
	{"javax.swing.plaf.nimbus.NimbusDefaults$LazyStyle$Part", "javax.swing.plaf.nimbus.NimbusDefaults$LazyStyle", "Part", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _NimbusDefaults$LazyStyle$Part_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusDefaults$LazyStyle$Part",
	"java.lang.Object",
	nullptr,
	_NimbusDefaults$LazyStyle$Part_FieldInfo_,
	_NimbusDefaults$LazyStyle$Part_MethodInfo_,
	nullptr,
	nullptr,
	_NimbusDefaults$LazyStyle$Part_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusDefaults"
};

$Object* allocate$NimbusDefaults$LazyStyle$Part($Class* clazz) {
	return $of($alloc(NimbusDefaults$LazyStyle$Part));
}

void NimbusDefaults$LazyStyle$Part::init$($NimbusDefaults$LazyStyle* this$1, $String* s) {
	$beforeCallerSensitive();
	$set(this, this$1, this$1);
	bool var$0 = $nc(s)->charAt(0) == u'\"';
	this->named = var$0 && s->charAt(s->length() - 1) == u'\"';
	if (this->named) {
		$set(this, s, s->substring(1, s->length() - 1));
	} else {
		$set(this, s, s);
		try {
			$set(this, c, $Class::forName($$str({"javax.swing.J"_s, s})));
		} catch ($Exception&) {
			$catch();
		}
		try {
			$set(this, c, $Class::forName($(s->replace(static_cast<$CharSequence*>("_"_s), static_cast<$CharSequence*>("."_s)))));
		} catch ($Exception&) {
			$catch();
		}
	}
}

NimbusDefaults$LazyStyle$Part::NimbusDefaults$LazyStyle$Part() {
}

$Class* NimbusDefaults$LazyStyle$Part::load$($String* name, bool initialize) {
	$loadClass(NimbusDefaults$LazyStyle$Part, name, initialize, &_NimbusDefaults$LazyStyle$Part_ClassInfo_, allocate$NimbusDefaults$LazyStyle$Part);
	return class$;
}

$Class* NimbusDefaults$LazyStyle$Part::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax