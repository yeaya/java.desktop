#ifndef _java_awt_JobAttributes_h_
#define _java_awt_JobAttributes_h_
//$ class java.awt.JobAttributes
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace awt {
		class JobAttributes$DefaultSelectionType;
		class JobAttributes$DestinationType;
		class JobAttributes$DialogType;
		class JobAttributes$MultipleDocumentHandlingType;
		class JobAttributes$SidesType;
	}
}

namespace java {
	namespace awt {

class $export JobAttributes : public ::java::lang::Cloneable {
	$class(JobAttributes, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	JobAttributes();
	void init$();
	void init$(::java::awt::JobAttributes* obj);
	void init$(int32_t copies, ::java::awt::JobAttributes$DefaultSelectionType* defaultSelection, ::java::awt::JobAttributes$DestinationType* destination, ::java::awt::JobAttributes$DialogType* dialog, $String* fileName, int32_t maxPage, int32_t minPage, ::java::awt::JobAttributes$MultipleDocumentHandlingType* multipleDocumentHandling, $Array<int32_t, 2>* pageRanges, $String* printer, ::java::awt::JobAttributes$SidesType* sides);
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	int32_t getCopies();
	::java::awt::JobAttributes$DefaultSelectionType* getDefaultSelection();
	::java::awt::JobAttributes$DestinationType* getDestination();
	::java::awt::JobAttributes$DialogType* getDialog();
	$String* getFileName();
	int32_t getFromPage();
	int32_t getMaxPage();
	int32_t getMinPage();
	::java::awt::JobAttributes$MultipleDocumentHandlingType* getMultipleDocumentHandling();
	$Array<int32_t, 2>* getPageRanges();
	$String* getPrinter();
	::java::awt::JobAttributes$SidesType* getSides();
	int32_t getToPage();
	virtual int32_t hashCode() override;
	void set(::java::awt::JobAttributes* obj);
	void setCopies(int32_t copies);
	void setCopiesToDefault();
	void setDefaultSelection(::java::awt::JobAttributes$DefaultSelectionType* defaultSelection);
	void setDestination(::java::awt::JobAttributes$DestinationType* destination);
	void setDialog(::java::awt::JobAttributes$DialogType* dialog);
	void setFileName($String* fileName);
	void setFromPage(int32_t fromPage);
	void setMaxPage(int32_t maxPage);
	void setMinPage(int32_t minPage);
	void setMultipleDocumentHandling(::java::awt::JobAttributes$MultipleDocumentHandlingType* multipleDocumentHandling);
	void setMultipleDocumentHandlingToDefault();
	void setPageRanges($Array<int32_t, 2>* pageRanges);
	void setPrinter($String* printer);
	void setSides(::java::awt::JobAttributes$SidesType* sides);
	void setSidesToDefault();
	void setToPage(int32_t toPage);
	virtual $String* toString() override;
	int32_t copies = 0;
	::java::awt::JobAttributes$DefaultSelectionType* defaultSelection = nullptr;
	::java::awt::JobAttributes$DestinationType* destination = nullptr;
	::java::awt::JobAttributes$DialogType* dialog = nullptr;
	$String* fileName = nullptr;
	int32_t fromPage = 0;
	int32_t maxPage = 0;
	int32_t minPage = 0;
	::java::awt::JobAttributes$MultipleDocumentHandlingType* multipleDocumentHandling = nullptr;
	$Array<int32_t, 2>* pageRanges = nullptr;
	int32_t prFirst = 0;
	int32_t prLast = 0;
	$String* printer = nullptr;
	::java::awt::JobAttributes$SidesType* sides = nullptr;
	int32_t toPage = 0;
};

	} // awt
} // java

#endif // _java_awt_JobAttributes_h_