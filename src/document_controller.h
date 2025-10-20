#ifndef DOCUMENT_CONTROLLER_H
#define DOCUMENT_CONTROLLER_H

#include "document_model.h"

class DocumentController {
public:
    DocumentController();
    ~DocumentController();

    void openDocument(const std::string& filePath);
    void saveDocument(const std::string& filePath);
    void closeDocument();

    std::string getDocumentContent() const;

private:
    Document document;
};

#endif // DOCUMENT_CONTROLLER_H