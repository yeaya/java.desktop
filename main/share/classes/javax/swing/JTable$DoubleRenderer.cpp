#include <javax/swing/JTable$DoubleRenderer.h>

#include <java/text/NumberFormat.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable$NumberRenderer.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormat = ::java::text::NumberFormat;
using $JTable$NumberRenderer = ::javax::swing::JTable$NumberRenderer;

namespace javax {
	namespace swing {

$FieldInfo _JTable$DoubleRenderer_FieldInfo_[] = {
	{"formatter", "Ljava/text/NumberFormat;", nullptr, 0, $field(JTable$DoubleRenderer, formatter)},
	{}
};

$MethodInfo _JTable$DoubleRenderer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTable$DoubleRenderer::*)()>(&JTable$DoubleRenderer::init$))},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTable$DoubleRenderer_InnerClassesInfo_[] = {
	{"javax.swing.JTable$DoubleRenderer", "javax.swing.JTable", "DoubleRenderer", $STATIC},
	{"javax.swing.JTable$NumberRenderer", "javax.swing.JTable", "NumberRenderer", $STATIC},
	{}
};

$ClassInfo _JTable$DoubleRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$DoubleRenderer",
	"javax.swing.JTable$NumberRenderer",
	nullptr,
	_JTable$DoubleRenderer_FieldInfo_,
	_JTable$DoubleRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$DoubleRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$DoubleRenderer($Class* clazz) {
	return $of($alloc(JTable$DoubleRenderer));
}

void JTable$DoubleRenderer::init$() {
	$JTable$NumberRenderer::init$();
}

void JTable$DoubleRenderer::setValue(Object$* value) {
	if (this->formatter == nullptr) {
		$set(this, formatter, $NumberFormat::getInstance());
	}
	setText((value == nullptr) ? ""_s : $($nc(this->formatter)->format(value)));
}

JTable$DoubleRenderer::JTable$DoubleRenderer() {
}

$Class* JTable$DoubleRenderer::load$($String* name, bool initialize) {
	$loadClass(JTable$DoubleRenderer, name, initialize, &_JTable$DoubleRenderer_ClassInfo_, allocate$JTable$DoubleRenderer);
	return class$;
}

$Class* JTable$DoubleRenderer::class$ = nullptr;

	} // swing
} // javax