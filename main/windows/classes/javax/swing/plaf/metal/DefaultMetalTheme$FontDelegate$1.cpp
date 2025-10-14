#include <javax/swing/plaf/metal/DefaultMetalTheme$FontDelegate$1.h>

#include <java/awt/Font.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme$FontDelegate.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $DefaultMetalTheme$FontDelegate = ::javax::swing::plaf::metal::DefaultMetalTheme$FontDelegate;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _DefaultMetalTheme$FontDelegate$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/DefaultMetalTheme$FontDelegate;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMetalTheme$FontDelegate$1, this$0)},
	{"val$key", "I", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMetalTheme$FontDelegate$1, val$key)},
	{}
};

$MethodInfo _DefaultMetalTheme$FontDelegate$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/DefaultMetalTheme$FontDelegate;I)V", "()V", 0, $method(static_cast<void(DefaultMetalTheme$FontDelegate$1::*)($DefaultMetalTheme$FontDelegate*,int32_t)>(&DefaultMetalTheme$FontDelegate$1::init$))},
	{"run", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultMetalTheme$FontDelegate$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate",
	"getPrivilegedFont",
	"(I)Ljava/awt/Font;"
};

$InnerClassInfo _DefaultMetalTheme$FontDelegate$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate", "javax.swing.plaf.metal.DefaultMetalTheme", "FontDelegate", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultMetalTheme$FontDelegate$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_DefaultMetalTheme$FontDelegate$1_FieldInfo_,
	_DefaultMetalTheme$FontDelegate$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/Font;>;",
	&_DefaultMetalTheme$FontDelegate$1_EnclosingMethodInfo_,
	_DefaultMetalTheme$FontDelegate$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.DefaultMetalTheme"
};

$Object* allocate$DefaultMetalTheme$FontDelegate$1($Class* clazz) {
	return $of($alloc(DefaultMetalTheme$FontDelegate$1));
}

void DefaultMetalTheme$FontDelegate$1::init$($DefaultMetalTheme$FontDelegate* this$0, int32_t val$key) {
	$set(this, this$0, this$0);
	this->val$key = val$key;
}

$Object* DefaultMetalTheme$FontDelegate$1::run() {
	return $of($Font::getFont($($DefaultMetalTheme::getDefaultPropertyName(this->val$key))));
}

DefaultMetalTheme$FontDelegate$1::DefaultMetalTheme$FontDelegate$1() {
}

$Class* DefaultMetalTheme$FontDelegate$1::load$($String* name, bool initialize) {
	$loadClass(DefaultMetalTheme$FontDelegate$1, name, initialize, &_DefaultMetalTheme$FontDelegate$1_ClassInfo_, allocate$DefaultMetalTheme$FontDelegate$1);
	return class$;
}

$Class* DefaultMetalTheme$FontDelegate$1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax