#include <sun/swing/table/DefaultTableCellHeaderRenderer$EmptyIcon.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <sun/swing/table/DefaultTableCellHeaderRenderer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $DefaultTableCellHeaderRenderer = ::sun::swing::table::DefaultTableCellHeaderRenderer;

namespace sun {
	namespace swing {
		namespace table {

$FieldInfo _DefaultTableCellHeaderRenderer$EmptyIcon_FieldInfo_[] = {
	{"this$0", "Lsun/swing/table/DefaultTableCellHeaderRenderer;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultTableCellHeaderRenderer$EmptyIcon, this$0)},
	{"width", "I", nullptr, 0, $field(DefaultTableCellHeaderRenderer$EmptyIcon, width)},
	{"height", "I", nullptr, 0, $field(DefaultTableCellHeaderRenderer$EmptyIcon, height)},
	{}
};

$MethodInfo _DefaultTableCellHeaderRenderer$EmptyIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/swing/table/DefaultTableCellHeaderRenderer;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultTableCellHeaderRenderer$EmptyIcon::*)($DefaultTableCellHeaderRenderer*)>(&DefaultTableCellHeaderRenderer$EmptyIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultTableCellHeaderRenderer$EmptyIcon_InnerClassesInfo_[] = {
	{"sun.swing.table.DefaultTableCellHeaderRenderer$EmptyIcon", "sun.swing.table.DefaultTableCellHeaderRenderer", "EmptyIcon", $PRIVATE},
	{}
};

$ClassInfo _DefaultTableCellHeaderRenderer$EmptyIcon_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.table.DefaultTableCellHeaderRenderer$EmptyIcon",
	"java.lang.Object",
	"javax.swing.Icon,java.io.Serializable",
	_DefaultTableCellHeaderRenderer$EmptyIcon_FieldInfo_,
	_DefaultTableCellHeaderRenderer$EmptyIcon_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultTableCellHeaderRenderer$EmptyIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.table.DefaultTableCellHeaderRenderer"
};

$Object* allocate$DefaultTableCellHeaderRenderer$EmptyIcon($Class* clazz) {
	return $of($alloc(DefaultTableCellHeaderRenderer$EmptyIcon));
}

int32_t DefaultTableCellHeaderRenderer$EmptyIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool DefaultTableCellHeaderRenderer$EmptyIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* DefaultTableCellHeaderRenderer$EmptyIcon::clone() {
	 return this->$Icon::clone();
}

$String* DefaultTableCellHeaderRenderer$EmptyIcon::toString() {
	 return this->$Icon::toString();
}

void DefaultTableCellHeaderRenderer$EmptyIcon::finalize() {
	this->$Icon::finalize();
}

void DefaultTableCellHeaderRenderer$EmptyIcon::init$($DefaultTableCellHeaderRenderer* this$0) {
	$set(this, this$0, this$0);
	this->width = 0;
	this->height = 0;
}

void DefaultTableCellHeaderRenderer$EmptyIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
}

int32_t DefaultTableCellHeaderRenderer$EmptyIcon::getIconWidth() {
	return this->width;
}

int32_t DefaultTableCellHeaderRenderer$EmptyIcon::getIconHeight() {
	return this->height;
}

DefaultTableCellHeaderRenderer$EmptyIcon::DefaultTableCellHeaderRenderer$EmptyIcon() {
}

$Class* DefaultTableCellHeaderRenderer$EmptyIcon::load$($String* name, bool initialize) {
	$loadClass(DefaultTableCellHeaderRenderer$EmptyIcon, name, initialize, &_DefaultTableCellHeaderRenderer$EmptyIcon_ClassInfo_, allocate$DefaultTableCellHeaderRenderer$EmptyIcon);
	return class$;
}

$Class* DefaultTableCellHeaderRenderer$EmptyIcon::class$ = nullptr;

		} // table
	} // swing
} // sun