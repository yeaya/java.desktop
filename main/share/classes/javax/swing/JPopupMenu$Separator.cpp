#include <javax/swing/JPopupMenu$Separator.h>

#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JSeparator.h>
#include <jcpp.h>

#undef HORIZONTAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSeparator = ::javax::swing::JSeparator;

namespace javax {
	namespace swing {

$MethodInfo _JPopupMenu$Separator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JPopupMenu$Separator::*)()>(&JPopupMenu$Separator::init$))},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JPopupMenu$Separator_InnerClassesInfo_[] = {
	{"javax.swing.JPopupMenu$Separator", "javax.swing.JPopupMenu", "Separator", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JPopupMenu$Separator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JPopupMenu$Separator",
	"javax.swing.JSeparator",
	nullptr,
	nullptr,
	_JPopupMenu$Separator_MethodInfo_,
	nullptr,
	nullptr,
	_JPopupMenu$Separator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JPopupMenu"
};

$Object* allocate$JPopupMenu$Separator($Class* clazz) {
	return $of($alloc(JPopupMenu$Separator));
}

void JPopupMenu$Separator::init$() {
	$JSeparator::init$($JSeparator::HORIZONTAL);
}

$String* JPopupMenu$Separator::getUIClassID() {
	return "PopupMenuSeparatorUI"_s;
}

JPopupMenu$Separator::JPopupMenu$Separator() {
}

$Class* JPopupMenu$Separator::load$($String* name, bool initialize) {
	$loadClass(JPopupMenu$Separator, name, initialize, &_JPopupMenu$Separator_ClassInfo_, allocate$JPopupMenu$Separator);
	return class$;
}

$Class* JPopupMenu$Separator::class$ = nullptr;

	} // swing
} // javax