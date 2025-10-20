#ifndef DOCUMENT_MODEL_H
#define DOCUMENT_MODEL_H

#include <string>

class Document {
public:
    Document();
    ~Document();

    bool hasUnsavedChanges() const;
    void markAsSaved() { unsavedChanges = false; }

    std::string getContent() const;
    void setContent(const std::string& newContent);
    void clear();

    void insertCharAt(size_t position, char c);
    void deleteCharAt(size_t position);

private:
    std::string content;
    bool unsavedChanges;
};

#endif // DOCUMENT_MODEL_H