#ifndef __AST_H
#define __AST_H

#define MAX_NODE_TYPE 50
#define MAX_EXTRA_DATA 50

typedef struct node {
	char type[MAX_NODE_TYPE];
	int numLinks;
	char extraData[MAX_EXTRA_DATA];
	struct node** links;
}Node;

Node* createTagSpecifier(const char* opening_tag, const char* closing_tag);
Node* createHtmlDocumentNode(Node* html_tag);
Node* createHtmlTagNode(Node* html_content, const char* opening_tag, const char* closing_tag);
Node* createHtmlContentNode(Node* head_tag, Node* body_tag, Node* frameset_tag);
Node* createHeadTagNode(Node* head_content, const char* opening_tag, const char* closing_tag);
Node* createFramesetTagNode(Node* frameset_content_list, const char* opening_tag, const char* closing_tag);
Node* createFramesetContentNode(Node* frameset_content);
Node* createNoframesTagNode(Node* noframes_tag);
Node* createBodyContentListNode(Node* body_content_list, const char* opening_tag, const char* closing_tag);
Node* createATagNode(Node* a_content, const char* opening_tag, const char* closing_tag);
Node* createHeadingNode(Node* heading);
Node* createTextNode(Node* text, const char* opening_tag, const char* closing_tag);
Node* createHxTagNode(Node* h_tag, const char* opening_tag, const char* closing_tag);
Node* createBodyContentNode(Node* body_content);
Node* createBlockNode(Node* block);
Node* createTextContentListNode(Node* html_content, const char* opening_tag, const char* closing_tag);
Node* createBlockContentListNode(Node* block_content_list);
Node* createCenterTagNode(Node* center_tag);
Node* createDivTagNode(Node* div_tag);
Node* createFormTagNode(Node* form_tag);
Node* createOlTagNode(Node* ol_tag);
Node* createPTagNode(Node* p_tag);
Node* createTableTagNode(Node* table_tag);
Node* createUlTagNode(Node* ul_tag);
Node* createBlockContentNode(Node* block_content);
Node* createFormContentListNode(Node* form_content_list, const char* opening_tag, const char* closing_tag);
Node* createFormContentNode(Node* form_content);
Node* createSelectTagNode(Node* select_tag);
Node* createTableContentNode(Node* table_content);
Node* createThTagNode(Node* th_tag);
Node* createTdTagNode(Node* td_tag);
Node* createTrTagNode(Node* tr_tag, const char* opening_tag, const char* closing_tag);
Node* createTableCellNode(Node* table_cell, const char* opening_tag, const char* closing_tag);
Node* createSelectContentListNode(Node* select_content_list, const char* opening_tag, const char* closing_tag);
Node* createTableContentListNode(Node* table_content_list, const char* opening_tag, const char* closing_tag);
Node* createSelectContentNode(Node* select_content);
Node* createOptionTagNode(Node* option_tag);
Node* createTextContentNode(Node* text_content);
Node* createLiTagListNode(Node* li_tag_list, const char* opening_tag, const char* closing_tag);
Node* createLiTagNode(Node* li_tag);
Node* createTagSpecifier(const char* opening_tag, const char* closing_tag);

Node* resizeNodeLinks(Node* nodeToResize, unsigned int newSize);
Node* createDefaultNode(const char* nodeName, unsigned int linksCount);

void addLinkToList(Node* listNode, Node* linkToAdd);
void printAst(Node* ast, int level);
#endif
