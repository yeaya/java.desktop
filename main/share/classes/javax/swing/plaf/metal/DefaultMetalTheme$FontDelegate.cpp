#include <javax/swing/plaf/metal/DefaultMetalTheme$FontDelegate.h>

#include <java/awt/Font.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme$FontDelegate$1.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <jcpp.h>

using $FontUIResourceArray = $Array<::javax::swing::plaf::FontUIResource>;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $DefaultMetalTheme$FontDelegate$1 = ::javax::swing::plaf::metal::DefaultMetalTheme$FontDelegate$1;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _DefaultMetalTheme$FontDelegate_FieldInfo_[] = {
	{"defaultMapping", "[I", nullptr, $PRIVATE | $STATIC, $staticField(DefaultMetalTheme$FontDelegate, defaultMapping)},
	{"fonts", "[Ljavax/swing/plaf/FontUIResource;", nullptr, 0, $field(DefaultMetalTheme$FontDelegate, fonts)},
	{}
};

$MethodInfo _DefaultMetalTheme$FontDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultMetalTheme$FontDelegate::*)()>(&DefaultMetalTheme$FontDelegate::init$))},
	{"getFont", "(I)Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC},
	{"getPrivilegedFont", "(I)Ljava/awt/Font;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _DefaultMetalTheme$FontDelegate_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate", "javax.swing.plaf.metal.DefaultMetalTheme", "FontDelegate", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultMetalTheme$FontDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate",
	"java.lang.Object",
	nullptr,
	_DefaultMetalTheme$FontDelegate_FieldInfo_,
	_DefaultMetalTheme$FontDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMetalTheme$FontDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.DefaultMetalTheme"
};

$Object* allocate$DefaultMetalTheme$FontDelegate($Class* clazz) {
	return $of($alloc(DefaultMetalTheme$FontDelegate));
}

$ints* DefaultMetalTheme$FontDelegate::defaultMapping = nullptr;

void DefaultMetalTheme$FontDelegate::init$() {
	$set(this, fonts, $new($FontUIResourceArray, 6));
}

$FontUIResource* DefaultMetalTheme$FontDelegate::getFont(int32_t type) {
	$useLocalCurrentObjectStackCache();
	int32_t mappedType = $nc(DefaultMetalTheme$FontDelegate::defaultMapping)->get(type);
	if ($nc(this->fonts)->get(type) == nullptr) {
		$var($Font, f, getPrivilegedFont(mappedType));
		if (f == nullptr) {
			$var($String, var$0, $DefaultMetalTheme::getDefaultFontName(type));
			int32_t var$1 = $DefaultMetalTheme::getDefaultFontStyle(type);
			$assign(f, $new($Font, var$0, var$1, $DefaultMetalTheme::getDefaultFontSize(type)));
		}
		$nc(this->fonts)->set(type, $$new($FontUIResource, f));
	}
	return $nc(this->fonts)->get(type);
}

$Font* DefaultMetalTheme$FontDelegate::getPrivilegedFont(int32_t key) {
	$beforeCallerSensitive();
	return $cast($Font, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($DefaultMetalTheme$FontDelegate$1, this, key))));
}

void clinit$DefaultMetalTheme$FontDelegate($Class* class$) {
	$assignStatic(DefaultMetalTheme$FontDelegate::defaultMapping, $new($ints, {
		0,
		1,
		2,
		0,
		0,
		5
	}));
}

DefaultMetalTheme$FontDelegate::DefaultMetalTheme$FontDelegate() {
}

$Class* DefaultMetalTheme$FontDelegate::load$($String* name, bool initialize) {
	$loadClass(DefaultMetalTheme$FontDelegate, name, initialize, &_DefaultMetalTheme$FontDelegate_ClassInfo_, clinit$DefaultMetalTheme$FontDelegate, allocate$DefaultMetalTheme$FontDelegate);
	return class$;
}

$Class* DefaultMetalTheme$FontDelegate::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax