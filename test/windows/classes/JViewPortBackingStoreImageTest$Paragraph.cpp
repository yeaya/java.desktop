#include <JViewPortBackingStoreImageTest$Paragraph.h>

#include <JViewPortBackingStoreImageTest$AttributedContent.h>
#include <JViewPortBackingStoreImageTest.h>
#include <jcpp.h>

using $JViewPortBackingStoreImageTest = ::JViewPortBackingStoreImageTest;
using $JViewPortBackingStoreImageTest$AttributedContent = ::JViewPortBackingStoreImageTest$AttributedContent;
using $JViewPortBackingStoreImageTest$AttributedContentArray = $Array<JViewPortBackingStoreImageTest$AttributedContent>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _JViewPortBackingStoreImageTest$Paragraph_FieldInfo_[] = {
	{"logical", "Ljava/lang/String;", nullptr, 0, $field(JViewPortBackingStoreImageTest$Paragraph, logical)},
	{"data", "[LJViewPortBackingStoreImageTest$AttributedContent;", nullptr, 0, $field(JViewPortBackingStoreImageTest$Paragraph, data)},
	{}
};

$MethodInfo _JViewPortBackingStoreImageTest$Paragraph_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[LJViewPortBackingStoreImageTest$AttributedContent;)V", nullptr, 0, $method(static_cast<void(JViewPortBackingStoreImageTest$Paragraph::*)($String*,$JViewPortBackingStoreImageTest$AttributedContentArray*)>(&JViewPortBackingStoreImageTest$Paragraph::init$))},
	{}
};

$InnerClassInfo _JViewPortBackingStoreImageTest$Paragraph_InnerClassesInfo_[] = {
	{"JViewPortBackingStoreImageTest$Paragraph", "JViewPortBackingStoreImageTest", "Paragraph", $STATIC},
	{}
};

$ClassInfo _JViewPortBackingStoreImageTest$Paragraph_ClassInfo_ = {
	$ACC_SUPER,
	"JViewPortBackingStoreImageTest$Paragraph",
	"java.lang.Object",
	nullptr,
	_JViewPortBackingStoreImageTest$Paragraph_FieldInfo_,
	_JViewPortBackingStoreImageTest$Paragraph_MethodInfo_,
	nullptr,
	nullptr,
	_JViewPortBackingStoreImageTest$Paragraph_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JViewPortBackingStoreImageTest"
};

$Object* allocate$JViewPortBackingStoreImageTest$Paragraph($Class* clazz) {
	return $of($alloc(JViewPortBackingStoreImageTest$Paragraph));
}

void JViewPortBackingStoreImageTest$Paragraph::init$($String* logical, $JViewPortBackingStoreImageTest$AttributedContentArray* data) {
	$set(this, logical, logical);
	$set(this, data, data);
}

JViewPortBackingStoreImageTest$Paragraph::JViewPortBackingStoreImageTest$Paragraph() {
}

$Class* JViewPortBackingStoreImageTest$Paragraph::load$($String* name, bool initialize) {
	$loadClass(JViewPortBackingStoreImageTest$Paragraph, name, initialize, &_JViewPortBackingStoreImageTest$Paragraph_ClassInfo_, allocate$JViewPortBackingStoreImageTest$Paragraph);
	return class$;
}

$Class* JViewPortBackingStoreImageTest$Paragraph::class$ = nullptr;