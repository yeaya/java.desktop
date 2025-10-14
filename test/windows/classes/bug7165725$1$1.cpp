#include <bug7165725$1$1.h>

#include <bug7165725$1.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $bug7165725$1 = ::bug7165725$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $Document = ::javax::swing::text::Document;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

$FieldInfo _bug7165725$1$1_FieldInfo_[] = {
	{"this$1", "Lbug7165725$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug7165725$1$1, this$1)},
	{}
};

$MethodInfo _bug7165725$1$1_MethodInfo_[] = {
	{"<init>", "(Lbug7165725$1;)V", nullptr, 0, $method(static_cast<void(bug7165725$1$1::*)($bug7165725$1*)>(&bug7165725$1$1::init$))},
	{"createDefaultDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7165725$1$1_EnclosingMethodInfo_ = {
	"bug7165725$1",
	"run",
	"()V"
};

$InnerClassInfo _bug7165725$1$1_InnerClassesInfo_[] = {
	{"bug7165725$1", nullptr, nullptr, 0},
	{"bug7165725$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7165725$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7165725$1$1",
	"javax.swing.text.html.HTMLEditorKit",
	nullptr,
	_bug7165725$1$1_FieldInfo_,
	_bug7165725$1$1_MethodInfo_,
	nullptr,
	&_bug7165725$1$1_EnclosingMethodInfo_,
	_bug7165725$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7165725"
};

$Object* allocate$bug7165725$1$1($Class* clazz) {
	return $of($alloc(bug7165725$1$1));
}

void bug7165725$1$1::init$($bug7165725$1* this$1) {
	$set(this, this$1, this$1);
	$HTMLEditorKit::init$();
}

$Document* bug7165725$1$1::createDefaultDocument() {
	$var($AbstractDocument, doc, $cast($AbstractDocument, $HTMLEditorKit::createDefaultDocument()));
	$nc(doc)->setAsynchronousLoadPriority(-1);
	return doc;
}

bug7165725$1$1::bug7165725$1$1() {
}

$Class* bug7165725$1$1::load$($String* name, bool initialize) {
	$loadClass(bug7165725$1$1, name, initialize, &_bug7165725$1$1_ClassInfo_, allocate$bug7165725$1$1);
	return class$;
}

$Class* bug7165725$1$1::class$ = nullptr;