#include <javax/swing/JToolBar$Separator.h>

#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/JToolBar.h>
#include <jcpp.h>

#undef HORIZONTAL

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSeparator = ::javax::swing::JSeparator;

namespace javax {
	namespace swing {

$FieldInfo _JToolBar$Separator_FieldInfo_[] = {
	{"separatorSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(JToolBar$Separator, separatorSize)},
	{}
};

$MethodInfo _JToolBar$Separator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JToolBar$Separator::*)()>(&JToolBar$Separator::init$))},
	{"<init>", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $method(static_cast<void(JToolBar$Separator::*)($Dimension*)>(&JToolBar$Separator::init$))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSeparatorSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setSeparatorSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JToolBar$Separator_InnerClassesInfo_[] = {
	{"javax.swing.JToolBar$Separator", "javax.swing.JToolBar", "Separator", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JToolBar$Separator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JToolBar$Separator",
	"javax.swing.JSeparator",
	nullptr,
	_JToolBar$Separator_FieldInfo_,
	_JToolBar$Separator_MethodInfo_,
	nullptr,
	nullptr,
	_JToolBar$Separator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JToolBar"
};

$Object* allocate$JToolBar$Separator($Class* clazz) {
	return $of($alloc(JToolBar$Separator));
}

void JToolBar$Separator::init$() {
	JToolBar$Separator::init$(nullptr);
}

void JToolBar$Separator::init$($Dimension* size) {
	$JSeparator::init$($JSeparator::HORIZONTAL);
	setSeparatorSize(size);
}

$String* JToolBar$Separator::getUIClassID() {
	return "ToolBarSeparatorUI"_s;
}

void JToolBar$Separator::setSeparatorSize($Dimension* size) {
	if (size != nullptr) {
		$set(this, separatorSize, size);
	} else {
		$JSeparator::updateUI();
	}
	this->invalidate();
}

$Dimension* JToolBar$Separator::getSeparatorSize() {
	return this->separatorSize;
}

$Dimension* JToolBar$Separator::getMinimumSize() {
	if (this->separatorSize != nullptr) {
		return $nc(this->separatorSize)->getSize();
	} else {
		return $JSeparator::getMinimumSize();
	}
}

$Dimension* JToolBar$Separator::getMaximumSize() {
	if (this->separatorSize != nullptr) {
		return $nc(this->separatorSize)->getSize();
	} else {
		return $JSeparator::getMaximumSize();
	}
}

$Dimension* JToolBar$Separator::getPreferredSize() {
	if (this->separatorSize != nullptr) {
		return $nc(this->separatorSize)->getSize();
	} else {
		return $JSeparator::getPreferredSize();
	}
}

JToolBar$Separator::JToolBar$Separator() {
}

$Class* JToolBar$Separator::load$($String* name, bool initialize) {
	$loadClass(JToolBar$Separator, name, initialize, &_JToolBar$Separator_ClassInfo_, allocate$JToolBar$Separator);
	return class$;
}

$Class* JToolBar$Separator::class$ = nullptr;

	} // swing
} // javax