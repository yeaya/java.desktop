#include <bug7082443$TestComboBox.h>

#include <bug7082443$TestComboBox$1.h>
#include <bug7082443.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/ListCellRenderer.h>
#include <jcpp.h>

using $bug7082443 = ::bug7082443;
using $bug7082443$TestComboBox$1 = ::bug7082443$TestComboBox$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;

$FieldInfo _bug7082443$TestComboBox_FieldInfo_[] = {
	{"renderer", "Ljavax/swing/ListCellRenderer;", nullptr, $PRIVATE | $FINAL, $field(bug7082443$TestComboBox, renderer)},
	{}
};

$MethodInfo _bug7082443$TestComboBox_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug7082443$TestComboBox::*)()>(&bug7082443$TestComboBox::init$))},
	{"access$001", "(Lbug7082443$TestComboBox;)Ljavax/swing/ListCellRenderer;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$ListCellRenderer*(*)(bug7082443$TestComboBox*)>(&bug7082443$TestComboBox::access$001))},
	{"getRenderer", "()Ljavax/swing/ListCellRenderer;", nullptr, $PUBLIC},
	{"isOldRendererOpaque", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug7082443$TestComboBox_InnerClassesInfo_[] = {
	{"bug7082443$TestComboBox", "bug7082443", "TestComboBox", $PRIVATE | $STATIC},
	{"bug7082443$TestComboBox$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7082443$TestComboBox_ClassInfo_ = {
	$ACC_SUPER,
	"bug7082443$TestComboBox",
	"javax.swing.JComboBox",
	nullptr,
	_bug7082443$TestComboBox_FieldInfo_,
	_bug7082443$TestComboBox_MethodInfo_,
	nullptr,
	nullptr,
	_bug7082443$TestComboBox_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7082443"
};

$Object* allocate$bug7082443$TestComboBox($Class* clazz) {
	return $of($alloc(bug7082443$TestComboBox));
}

$ListCellRenderer* bug7082443$TestComboBox::access$001(bug7082443$TestComboBox* x0) {
	$init(bug7082443$TestComboBox);
	return $nc(x0)->$JComboBox::getRenderer();
}

void bug7082443$TestComboBox::init$() {
	$JComboBox::init$();
	$set(this, renderer, $new($bug7082443$TestComboBox$1, this));
}

$ListCellRenderer* bug7082443$TestComboBox::getRenderer() {
	return this->renderer;
}

bool bug7082443$TestComboBox::isOldRendererOpaque() {
	return $nc(($cast($JLabel, $($JComboBox::getRenderer()))))->isOpaque();
}

bug7082443$TestComboBox::bug7082443$TestComboBox() {
}

$Class* bug7082443$TestComboBox::load$($String* name, bool initialize) {
	$loadClass(bug7082443$TestComboBox, name, initialize, &_bug7082443$TestComboBox_ClassInfo_, allocate$bug7082443$TestComboBox);
	return class$;
}

$Class* bug7082443$TestComboBox::class$ = nullptr;