#include <bug7082443$TestComboBox$1.h>

#include <bug7082443$TestComboBox.h>
#include <bug7082443.h>
#include <java/awt/Component.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListCellRenderer.h>
#include <jcpp.h>

using $bug7082443 = ::bug7082443;
using $bug7082443$TestComboBox = ::bug7082443$TestComboBox;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;

$FieldInfo _bug7082443$TestComboBox$1_FieldInfo_[] = {
	{"this$0", "Lbug7082443$TestComboBox;", nullptr, $FINAL | $SYNTHETIC, $field(bug7082443$TestComboBox$1, this$0)},
	{}
};

$MethodInfo _bug7082443$TestComboBox$1_MethodInfo_[] = {
	{"<init>", "(Lbug7082443$TestComboBox;)V", nullptr, 0, $method(static_cast<void(bug7082443$TestComboBox$1::*)($bug7082443$TestComboBox*)>(&bug7082443$TestComboBox$1::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7082443$TestComboBox$1_EnclosingMethodInfo_ = {
	"bug7082443$TestComboBox",
	nullptr,
	nullptr
};

$InnerClassInfo _bug7082443$TestComboBox$1_InnerClassesInfo_[] = {
	{"bug7082443$TestComboBox", "bug7082443", "TestComboBox", $PRIVATE | $STATIC},
	{"bug7082443$TestComboBox$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7082443$TestComboBox$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7082443$TestComboBox$1",
	"java.lang.Object",
	"javax.swing.ListCellRenderer",
	_bug7082443$TestComboBox$1_FieldInfo_,
	_bug7082443$TestComboBox$1_MethodInfo_,
	nullptr,
	&_bug7082443$TestComboBox$1_EnclosingMethodInfo_,
	_bug7082443$TestComboBox$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7082443"
};

$Object* allocate$bug7082443$TestComboBox$1($Class* clazz) {
	return $of($alloc(bug7082443$TestComboBox$1));
}

void bug7082443$TestComboBox$1::init$($bug7082443$TestComboBox* this$0) {
	$set(this, this$0, this$0);
}

$Component* bug7082443$TestComboBox$1::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	return $nc($($bug7082443$TestComboBox::access$001(this->this$0)))->getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
}

bug7082443$TestComboBox$1::bug7082443$TestComboBox$1() {
}

$Class* bug7082443$TestComboBox$1::load$($String* name, bool initialize) {
	$loadClass(bug7082443$TestComboBox$1, name, initialize, &_bug7082443$TestComboBox$1_ClassInfo_, allocate$bug7082443$TestComboBox$1);
	return class$;
}

$Class* bug7082443$TestComboBox$1::class$ = nullptr;