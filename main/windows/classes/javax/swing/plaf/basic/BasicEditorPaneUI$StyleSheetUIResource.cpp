#include <javax/swing/plaf/basic/BasicEditorPaneUI$StyleSheetUIResource.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicEditorPaneUI = ::javax::swing::plaf::basic::BasicEditorPaneUI;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicEditorPaneUI$StyleSheetUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicEditorPaneUI$StyleSheetUIResource::*)()>(&BasicEditorPaneUI$StyleSheetUIResource::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicEditorPaneUI$StyleSheetUIResource_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicEditorPaneUI$StyleSheetUIResource", "javax.swing.plaf.basic.BasicEditorPaneUI", "StyleSheetUIResource", $STATIC},
	{}
};

$ClassInfo _BasicEditorPaneUI$StyleSheetUIResource_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicEditorPaneUI$StyleSheetUIResource",
	"javax.swing.text.html.StyleSheet",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BasicEditorPaneUI$StyleSheetUIResource_MethodInfo_,
	nullptr,
	nullptr,
	_BasicEditorPaneUI$StyleSheetUIResource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicEditorPaneUI"
};

$Object* allocate$BasicEditorPaneUI$StyleSheetUIResource($Class* clazz) {
	return $of($alloc(BasicEditorPaneUI$StyleSheetUIResource));
}

$String* BasicEditorPaneUI$StyleSheetUIResource::toString() {
	 return this->$StyleSheet::toString();
}

int32_t BasicEditorPaneUI$StyleSheetUIResource::hashCode() {
	 return this->$StyleSheet::hashCode();
}

bool BasicEditorPaneUI$StyleSheetUIResource::equals(Object$* arg0) {
	 return this->$StyleSheet::equals(arg0);
}

$Object* BasicEditorPaneUI$StyleSheetUIResource::clone() {
	 return this->$StyleSheet::clone();
}

void BasicEditorPaneUI$StyleSheetUIResource::finalize() {
	this->$StyleSheet::finalize();
}

void BasicEditorPaneUI$StyleSheetUIResource::init$() {
	$StyleSheet::init$();
}

BasicEditorPaneUI$StyleSheetUIResource::BasicEditorPaneUI$StyleSheetUIResource() {
}

$Class* BasicEditorPaneUI$StyleSheetUIResource::load$($String* name, bool initialize) {
	$loadClass(BasicEditorPaneUI$StyleSheetUIResource, name, initialize, &_BasicEditorPaneUI$StyleSheetUIResource_ClassInfo_, allocate$BasicEditorPaneUI$StyleSheetUIResource);
	return class$;
}

$Class* BasicEditorPaneUI$StyleSheetUIResource::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax