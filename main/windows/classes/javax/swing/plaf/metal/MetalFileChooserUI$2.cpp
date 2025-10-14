#include <javax/swing/plaf/metal/MetalFileChooserUI$2.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef VIEWTYPE_DETAILS
#undef VIEWTYPE_LIST

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JToggleButton = ::javax::swing::JToggleButton;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;
using $FilePane = ::sun::swing::FilePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalFileChooserUI$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$2, this$0)},
	{}
};

$MethodInfo _MetalFileChooserUI$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, 0, $method(static_cast<void(MetalFileChooserUI$2::*)($MetalFileChooserUI*)>(&MetalFileChooserUI$2::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MetalFileChooserUI$2_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.MetalFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _MetalFileChooserUI$2_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalFileChooserUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI$2",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_MetalFileChooserUI$2_FieldInfo_,
	_MetalFileChooserUI$2_MethodInfo_,
	nullptr,
	&_MetalFileChooserUI$2_EnclosingMethodInfo_,
	_MetalFileChooserUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI"
};

$Object* allocate$MetalFileChooserUI$2($Class* clazz) {
	return $of($alloc(MetalFileChooserUI$2));
}

void MetalFileChooserUI$2::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void MetalFileChooserUI$2::propertyChange($PropertyChangeEvent* e) {
	if ("viewType"_s->equals($($nc(e)->getPropertyName()))) {
		int32_t viewType = $nc(this->this$0->filePane)->getViewType();
		switch (viewType) {
		case $FilePane::VIEWTYPE_LIST:
			{
				$nc(this->this$0->listViewButton)->setSelected(true);
				break;
			}
		case $FilePane::VIEWTYPE_DETAILS:
			{
				$nc(this->this$0->detailsViewButton)->setSelected(true);
				break;
			}
		}
	}
}

MetalFileChooserUI$2::MetalFileChooserUI$2() {
}

$Class* MetalFileChooserUI$2::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI$2, name, initialize, &_MetalFileChooserUI$2_ClassInfo_, allocate$MetalFileChooserUI$2);
	return class$;
}

$Class* MetalFileChooserUI$2::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax