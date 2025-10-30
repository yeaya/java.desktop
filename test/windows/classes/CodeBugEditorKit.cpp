#include <CodeBugEditorKit.h>

#include <CodeBugDocument.h>
#include <TableFactory.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

using $CodeBugDocument = ::CodeBugDocument;
using $TableFactory = ::TableFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $ViewFactory = ::javax::swing::text::ViewFactory;

$FieldInfo _CodeBugEditorKit_FieldInfo_[] = {
	{"defaultFactory", "Ljavax/swing/text/ViewFactory;", nullptr, 0, $field(CodeBugEditorKit, defaultFactory)},
	{}
};

$MethodInfo _CodeBugEditorKit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CodeBugEditorKit::*)()>(&CodeBugEditorKit::init$))},
	{"createDefaultDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC},
	{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CodeBugEditorKit_ClassInfo_ = {
	$ACC_SUPER,
	"CodeBugEditorKit",
	"javax.swing.text.StyledEditorKit",
	nullptr,
	_CodeBugEditorKit_FieldInfo_,
	_CodeBugEditorKit_MethodInfo_
};

$Object* allocate$CodeBugEditorKit($Class* clazz) {
	return $of($alloc(CodeBugEditorKit));
}

void CodeBugEditorKit::init$() {
	$StyledEditorKit::init$();
	$set(this, defaultFactory, $new($TableFactory));
}

$ViewFactory* CodeBugEditorKit::getViewFactory() {
	return this->defaultFactory;
}

$Document* CodeBugEditorKit::createDefaultDocument() {
	return static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>($new($CodeBugDocument))));
}

CodeBugEditorKit::CodeBugEditorKit() {
}

$Class* CodeBugEditorKit::load$($String* name, bool initialize) {
	$loadClass(CodeBugEditorKit, name, initialize, &_CodeBugEditorKit_ClassInfo_, allocate$CodeBugEditorKit);
	return class$;
}

$Class* CodeBugEditorKit::class$ = nullptr;