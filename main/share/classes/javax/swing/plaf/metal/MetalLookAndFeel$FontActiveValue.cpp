#include <javax/swing/plaf/metal/MetalLookAndFeel$FontActiveValue.h>

#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <jcpp.h>

#undef CONTROL_TEXT_FONT
#undef MENU_TEXT_FONT
#undef SUB_TEXT_FONT
#undef SYSTEM_TEXT_FONT
#undef USER_TEXT_FONT
#undef WINDOW_TITLE_FONT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $MetalTheme = ::javax::swing::plaf::metal::MetalTheme;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalLookAndFeel$FontActiveValue_FieldInfo_[] = {
	{"type", "I", nullptr, $PRIVATE, $field(MetalLookAndFeel$FontActiveValue, type)},
	{"theme", "Ljavax/swing/plaf/metal/MetalTheme;", nullptr, $PRIVATE, $field(MetalLookAndFeel$FontActiveValue, theme)},
	{}
};

$MethodInfo _MetalLookAndFeel$FontActiveValue_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalTheme;I)V", nullptr, 0, $method(static_cast<void(MetalLookAndFeel$FontActiveValue::*)($MetalTheme*,int32_t)>(&MetalLookAndFeel$FontActiveValue::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalLookAndFeel$FontActiveValue_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalLookAndFeel$FontActiveValue", "javax.swing.plaf.metal.MetalLookAndFeel", "FontActiveValue", $PRIVATE | $STATIC},
	{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MetalLookAndFeel$FontActiveValue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalLookAndFeel$FontActiveValue",
	"java.lang.Object",
	"javax.swing.UIDefaults$ActiveValue",
	_MetalLookAndFeel$FontActiveValue_FieldInfo_,
	_MetalLookAndFeel$FontActiveValue_MethodInfo_,
	nullptr,
	nullptr,
	_MetalLookAndFeel$FontActiveValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalLookAndFeel"
};

$Object* allocate$MetalLookAndFeel$FontActiveValue($Class* clazz) {
	return $of($alloc(MetalLookAndFeel$FontActiveValue));
}

void MetalLookAndFeel$FontActiveValue::init$($MetalTheme* theme, int32_t type) {
	$set(this, theme, theme);
	this->type = type;
}

$Object* MetalLookAndFeel$FontActiveValue::createValue($UIDefaults* table) {
	$var($Object, value, nullptr);
	switch (this->type) {
	case $MetalTheme::CONTROL_TEXT_FONT:
		{
			$assign(value, $nc(this->theme)->getControlTextFont());
			break;
		}
	case $MetalTheme::SYSTEM_TEXT_FONT:
		{
			$assign(value, $nc(this->theme)->getSystemTextFont());
			break;
		}
	case $MetalTheme::USER_TEXT_FONT:
		{
			$assign(value, $nc(this->theme)->getUserTextFont());
			break;
		}
	case $MetalTheme::MENU_TEXT_FONT:
		{
			$assign(value, $nc(this->theme)->getMenuTextFont());
			break;
		}
	case $MetalTheme::WINDOW_TITLE_FONT:
		{
			$assign(value, $nc(this->theme)->getWindowTitleFont());
			break;
		}
	case $MetalTheme::SUB_TEXT_FONT:
		{
			$assign(value, $nc(this->theme)->getSubTextFont());
			break;
		}
	}
	return $of(value);
}

MetalLookAndFeel$FontActiveValue::MetalLookAndFeel$FontActiveValue() {
}

$Class* MetalLookAndFeel$FontActiveValue::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$FontActiveValue, name, initialize, &_MetalLookAndFeel$FontActiveValue_ClassInfo_, allocate$MetalLookAndFeel$FontActiveValue);
	return class$;
}

$Class* MetalLookAndFeel$FontActiveValue::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax