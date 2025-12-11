#include <CleanInternalStorageOnSetText.h>

#include <java/awt/EventQueue.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/text/AbstractDocument$Content.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/GapContent.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PlainDocument.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/StringContent.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

using $EventQueue = ::java::awt::EventQueue;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $JPasswordField = ::javax::swing::JPasswordField;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AbstractDocument$Content = ::javax::swing::text::AbstractDocument$Content;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $GapContent = ::javax::swing::text::GapContent;
using $PlainDocument = ::javax::swing::text::PlainDocument;
using $Segment = ::javax::swing::text::Segment;
using $StringContent = ::javax::swing::text::StringContent;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

class CleanInternalStorageOnSetText$$Lambda$lambda$main$0 : public $Runnable {
	$class(CleanInternalStorageOnSetText$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		CleanInternalStorageOnSetText::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CleanInternalStorageOnSetText$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CleanInternalStorageOnSetText$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CleanInternalStorageOnSetText$$Lambda$lambda$main$0::*)()>(&CleanInternalStorageOnSetText$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CleanInternalStorageOnSetText$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"CleanInternalStorageOnSetText$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* CleanInternalStorageOnSetText$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(CleanInternalStorageOnSetText$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CleanInternalStorageOnSetText$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _CleanInternalStorageOnSetText_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CleanInternalStorageOnSetText::*)()>(&CleanInternalStorageOnSetText::init$))},
	{"getInternalArray", "(Ljavax/swing/JPasswordField;)[C", nullptr, $PRIVATE | $STATIC, $method(static_cast<$chars*(*)($JPasswordField*)>(&CleanInternalStorageOnSetText::getInternalArray))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&CleanInternalStorageOnSetText::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CleanInternalStorageOnSetText::main)), "java.lang.Exception"},
	{"test", "(Ljavax/swing/JPasswordField;Ljava/lang/String;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JPasswordField*,$String*,bool)>(&CleanInternalStorageOnSetText::test))},
	{"testStorage", "(ZLjavax/swing/JPasswordField;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool,$JPasswordField*)>(&CleanInternalStorageOnSetText::testStorage))},
	{}
};

$ClassInfo _CleanInternalStorageOnSetText_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"CleanInternalStorageOnSetText",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CleanInternalStorageOnSetText_MethodInfo_
};

$Object* allocate$CleanInternalStorageOnSetText($Class* clazz) {
	return $of($alloc(CleanInternalStorageOnSetText));
}

void CleanInternalStorageOnSetText::init$() {
}

void CleanInternalStorageOnSetText::main($StringArray* args) {
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(CleanInternalStorageOnSetText$$Lambda$lambda$main$0)));
}

void CleanInternalStorageOnSetText::testStorage(bool makeGap, $JPasswordField* pf) {
	test(pf, "123"_s, makeGap);
	test(pf, "1234567"_s, makeGap);
	test(pf, "1234567890"_s, makeGap);
	test(pf, $("1"_s->repeat(100)), makeGap);
	test(pf, "1234567890"_s, makeGap);
	test(pf, "1234567"_s, makeGap);
	test(pf, "123"_s, makeGap);
	test(pf, ""_s, makeGap);
}

void CleanInternalStorageOnSetText::test($JPasswordField* pf, $String* text, bool makeGap) {
	$useLocalCurrentObjectStackCache();
	$nc(pf)->setText(text);
	if (makeGap && $nc(text)->length() > 3) {
		try {
			$nc($(pf->getDocument()))->remove(1, 2);
		} catch ($BadLocationException& e) {
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		}
	}
	$var($chars, internalArray, getInternalArray(pf));
	$var($ArrayList, segments, $new($ArrayList));
	if (makeGap) {
		$var($Document, doc, pf->getDocument());
		int32_t nleft = $nc(doc)->getLength();
		$var($Segment, sgm, $new($Segment));
		sgm->setPartialReturn(true);
		int32_t offs = 0;
		try {
			while (nleft > 0) {
				doc->getText(offs, nleft, sgm);
				segments->add(sgm);
				nleft -= sgm->count;
				offs += sgm->count;
			}
		} catch ($BadLocationException& e) {
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		}
	}
	$nc($System::err)->println($$str({"Before = "_s, $($Arrays::toString(internalArray))}));
	pf->setText(""_s);
	$nc($System::err)->println($$str({"After = "_s, $($Arrays::toString(internalArray))}));
	if (!makeGap) {
		{
			$var($chars, arr$, internalArray);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				char16_t c = arr$->get(i$);
				{
					if (c != u'\0' && c != u'\n') {
						$throwNew($RuntimeException, $($Arrays::toString(internalArray)));
					}
				}
			}
		}
	} else {
		{
			$var($Iterator, i$, segments->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Segment, sgm, $cast($Segment, i$->next()));
				{
					for (int32_t i = $nc(sgm)->offset; i < sgm->count + sgm->offset; ++i) {
						char16_t c = $nc(sgm->array)->get(i);
						if (c != u'\0' && c != u'\n') {
							$throwNew($RuntimeException, $($Arrays::toString(sgm->array)));
						}
					}
				}
			}
		}
	}
}

$chars* CleanInternalStorageOnSetText::getInternalArray($JPasswordField* pf) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, $nc(pf)->getDocument());
	int32_t nleft = $nc(doc)->getLength();
	$var($Segment, text, $new($Segment));
	int32_t offs = 0;
	text->setPartialReturn(true);
	try {
		doc->getText(offs, nleft, text);
	} catch ($BadLocationException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	return text->array;
}

void CleanInternalStorageOnSetText::lambda$main$0() {
	$useLocalCurrentObjectStackCache();
	testStorage(false, $$new($JPasswordField));
	testStorage(true, $$new($JPasswordField));
	$var($Document, document, $new($PlainDocument, $$new($StringContent)));
	testStorage(false, $$new($JPasswordField, document, ""_s, 10));
	$assign(document, $new($PlainDocument, $$new($StringContent)));
	testStorage(true, $$new($JPasswordField, document, ""_s, 10));
	$assign(document, $new($PlainDocument, $$new($GapContent)));
	testStorage(false, $$new($JPasswordField, document, ""_s, 10));
	$assign(document, $new($PlainDocument, $$new($GapContent)));
	testStorage(true, $$new($JPasswordField, document, ""_s, 10));
	$var($AbstractDocument$Content, var$0, static_cast<$AbstractDocument$Content*>($new($StringContent)));
	$assign(document, static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>($new($HTMLDocument, var$0, $$new($StyleSheet))))));
	testStorage(false, $$new($JPasswordField, document, ""_s, 10));
	$var($AbstractDocument$Content, var$1, static_cast<$AbstractDocument$Content*>($new($StringContent)));
	$assign(document, static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>($new($HTMLDocument, var$1, $$new($StyleSheet))))));
	testStorage(true, $$new($JPasswordField, document, ""_s, 10));
	$var($AbstractDocument$Content, var$2, static_cast<$AbstractDocument$Content*>($new($GapContent)));
	$assign(document, static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>($new($HTMLDocument, var$2, $$new($StyleSheet))))));
	testStorage(false, $$new($JPasswordField, document, ""_s, 10));
	$var($AbstractDocument$Content, var$3, static_cast<$AbstractDocument$Content*>($new($GapContent)));
	$assign(document, static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>($new($HTMLDocument, var$3, $$new($StyleSheet))))));
	testStorage(true, $$new($JPasswordField, document, ""_s, 10));
}

CleanInternalStorageOnSetText::CleanInternalStorageOnSetText() {
}

$Class* CleanInternalStorageOnSetText::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CleanInternalStorageOnSetText$$Lambda$lambda$main$0::classInfo$.name)) {
			return CleanInternalStorageOnSetText$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(CleanInternalStorageOnSetText, name, initialize, &_CleanInternalStorageOnSetText_ClassInfo_, allocate$CleanInternalStorageOnSetText);
	return class$;
}

$Class* CleanInternalStorageOnSetText::class$ = nullptr;