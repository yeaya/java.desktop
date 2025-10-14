#include <javax/swing/ListCellRenderer.h>

#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;

namespace javax {
	namespace swing {

$MethodInfo _ListCellRenderer_MethodInfo_[] = {
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<+TE;>;TE;IZZ)Ljava/awt/Component;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ListCellRenderer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.ListCellRenderer",
	nullptr,
	nullptr,
	nullptr,
	_ListCellRenderer_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;"
};

$Object* allocate$ListCellRenderer($Class* clazz) {
	return $of($alloc(ListCellRenderer));
}

$Class* ListCellRenderer::load$($String* name, bool initialize) {
	$loadClass(ListCellRenderer, name, initialize, &_ListCellRenderer_ClassInfo_, allocate$ListCellRenderer);
	return class$;
}

$Class* ListCellRenderer::class$ = nullptr;

	} // swing
} // javax