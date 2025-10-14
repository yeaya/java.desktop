#include <com/sun/java/swing/plaf/motif/MotifTreeCellRenderer.h>

#include <com/sun/java/swing/plaf/motif/MotifTreeCellRenderer$TreeLeafIcon.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/IconUIResource.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <jcpp.h>

#undef LEAF_ICON
#undef LEAF_SIZE

using $MotifTreeCellRenderer$TreeLeafIcon = ::com::sun::java::swing::plaf::motif::MotifTreeCellRenderer$TreeLeafIcon;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $IconUIResource = ::javax::swing::plaf::IconUIResource;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifTreeCellRenderer_FieldInfo_[] = {
	{"LEAF_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(MotifTreeCellRenderer, LEAF_SIZE)},
	{"LEAF_ICON", "Ljavax/swing/Icon;", nullptr, $STATIC | $FINAL, $staticField(MotifTreeCellRenderer, LEAF_ICON)},
	{}
};

$MethodInfo _MotifTreeCellRenderer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifTreeCellRenderer::*)()>(&MotifTreeCellRenderer::init$))},
	{"loadLeafIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MotifTreeCellRenderer::loadLeafIcon))},
	{}
};

$InnerClassInfo _MotifTreeCellRenderer_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifTreeCellRenderer$TreeLeafIcon", "com.sun.java.swing.plaf.motif.MotifTreeCellRenderer", "TreeLeafIcon", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MotifTreeCellRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifTreeCellRenderer",
	"javax.swing.tree.DefaultTreeCellRenderer",
	nullptr,
	_MotifTreeCellRenderer_FieldInfo_,
	_MotifTreeCellRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_MotifTreeCellRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifTreeCellRenderer$TreeLeafIcon"
};

$Object* allocate$MotifTreeCellRenderer($Class* clazz) {
	return $of($alloc(MotifTreeCellRenderer));
}

$Icon* MotifTreeCellRenderer::LEAF_ICON = nullptr;

void MotifTreeCellRenderer::init$() {
	$DefaultTreeCellRenderer::init$();
}

$Icon* MotifTreeCellRenderer::loadLeafIcon() {
	$init(MotifTreeCellRenderer);
	return MotifTreeCellRenderer::LEAF_ICON;
}

void clinit$MotifTreeCellRenderer($Class* class$) {
	$assignStatic(MotifTreeCellRenderer::LEAF_ICON, $new($IconUIResource, $$new($MotifTreeCellRenderer$TreeLeafIcon)));
}

MotifTreeCellRenderer::MotifTreeCellRenderer() {
}

$Class* MotifTreeCellRenderer::load$($String* name, bool initialize) {
	$loadClass(MotifTreeCellRenderer, name, initialize, &_MotifTreeCellRenderer_ClassInfo_, clinit$MotifTreeCellRenderer, allocate$MotifTreeCellRenderer);
	return class$;
}

$Class* MotifTreeCellRenderer::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com