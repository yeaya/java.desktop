#include <javax/swing/plaf/metal/MetalFileChooserUI$SingleClickListener.h>

#include <java/awt/event/MouseAdapter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $JList = ::javax::swing::JList;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$NamedAttribute MetalFileChooserUI$SingleClickListener_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};
$CompoundAttribute _MetalFileChooserUI$SingleClickListener_Annotations_[] = {
	{"Ljava/lang/Deprecated;", MetalFileChooserUI$SingleClickListener_Attribute_var$0},
	{}
};


$FieldInfo _MetalFileChooserUI$SingleClickListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$SingleClickListener, this$0)},
	{}
};

$MethodInfo _MetalFileChooserUI$SingleClickListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;Ljavax/swing/JList;)V", "(Ljavax/swing/JList<*>;)V", $PUBLIC, $method(static_cast<void(MetalFileChooserUI$SingleClickListener::*)($MetalFileChooserUI*,$JList*)>(&MetalFileChooserUI$SingleClickListener::init$))},
	{}
};

$InnerClassInfo _MetalFileChooserUI$SingleClickListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$SingleClickListener", "javax.swing.plaf.metal.MetalFileChooserUI", "SingleClickListener", $PROTECTED},
	{}
};

$ClassInfo _MetalFileChooserUI$SingleClickListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI$SingleClickListener",
	"java.awt.event.MouseAdapter",
	nullptr,
	_MetalFileChooserUI$SingleClickListener_FieldInfo_,
	_MetalFileChooserUI$SingleClickListener_MethodInfo_,
	nullptr,
	nullptr,
	_MetalFileChooserUI$SingleClickListener_InnerClassesInfo_,
	_MetalFileChooserUI$SingleClickListener_Annotations_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI"
};

$Object* allocate$MetalFileChooserUI$SingleClickListener($Class* clazz) {
	return $of($alloc(MetalFileChooserUI$SingleClickListener));
}

void MetalFileChooserUI$SingleClickListener::init$($MetalFileChooserUI* this$0, $JList* list) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

MetalFileChooserUI$SingleClickListener::MetalFileChooserUI$SingleClickListener() {
}

$Class* MetalFileChooserUI$SingleClickListener::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI$SingleClickListener, name, initialize, &_MetalFileChooserUI$SingleClickListener_ClassInfo_, allocate$MetalFileChooserUI$SingleClickListener);
	return class$;
}

$Class* MetalFileChooserUI$SingleClickListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax