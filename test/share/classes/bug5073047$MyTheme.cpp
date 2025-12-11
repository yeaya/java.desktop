#include <bug5073047$MyTheme.h>

#include <bug5073047.h>
#include <java/awt/Font.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;

$FieldInfo _bug5073047$MyTheme_FieldInfo_[] = {
	{"ctf", "Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $FINAL, $field(bug5073047$MyTheme, ctf)},
	{}
};

$MethodInfo _bug5073047$MyTheme_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug5073047$MyTheme::*)()>(&bug5073047$MyTheme::init$))},
	{"getControlTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug5073047$MyTheme_InnerClassesInfo_[] = {
	{"bug5073047$MyTheme", "bug5073047", "MyTheme", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug5073047$MyTheme_ClassInfo_ = {
	$ACC_SUPER,
	"bug5073047$MyTheme",
	"javax.swing.plaf.metal.DefaultMetalTheme",
	nullptr,
	_bug5073047$MyTheme_FieldInfo_,
	_bug5073047$MyTheme_MethodInfo_,
	nullptr,
	nullptr,
	_bug5073047$MyTheme_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug5073047"
};

$Object* allocate$bug5073047$MyTheme($Class* clazz) {
	return $of($alloc(bug5073047$MyTheme));
}

void bug5073047$MyTheme::init$() {
	$useLocalCurrentObjectStackCache();
	$DefaultMetalTheme::init$();
	$set(this, ctf, $new($FontUIResource, $($nc($($DefaultMetalTheme::getControlTextFont()))->deriveFont(40.0f))));
}

$FontUIResource* bug5073047$MyTheme::getControlTextFont() {
	return this->ctf;
}

bug5073047$MyTheme::bug5073047$MyTheme() {
}

$Class* bug5073047$MyTheme::load$($String* name, bool initialize) {
	$loadClass(bug5073047$MyTheme, name, initialize, &_bug5073047$MyTheme_ClassInfo_, allocate$bug5073047$MyTheme);
	return class$;
}

$Class* bug5073047$MyTheme::class$ = nullptr;