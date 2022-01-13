/**********************************
 * File:     PrintVisitor.h
 *
 * Author:   caipeng
 *
 * Email:    iiicp@outlook.com
 *
 * Date:     2022/1/3
 ***********************************/

#ifndef C100_PRINTVISITOR_H
#define C100_PRINTVISITOR_H

#include "AstNode.h"
#include <string>

namespace C100
{
class PrintVisitor : public AstVisitor
{
public:
    std::string Content;
public:
  void VisitorProgramNode(ProgramNode *node) override;

private:
  void VisitorFunctionNode(FunctionNode *node) override;
  void VisitorExprStmtNode(ExprStmtNode *node) override;
  void VisitorAssignExprNode(AssignExprNode *node) override;
  void VisitorIfStmtNode(IfStmtNode *node) override;
  void VisitorWhileStmtNode(WhileStmtNode *node) override;
  void VisitorDoWhileStmtNode(DoWhileStmtNode *node) override;
  void VisitorForStmtNode(ForStmtNode *node) override;
  void VisitorBlockStmtNode(BlockStmtNode *node) override;
  void VisitorBinaryNode(BinaryNode *node) override;
  void VisitorConstantNode(ConstantNode *node) override;
  void VisitorVarExprNode(VarExprNode *node) override;
};
}

#endif // C100_PRINTVISITOR_H
