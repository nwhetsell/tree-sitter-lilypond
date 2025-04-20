\version "2.24.0"
% <- processing
%        ^ string.delimiter.left
%         ^ string
%               ^ string.delimiter.right

\language english
% <- identifier.core.function
%         ^ identifier.core.constant.language

# (define foo '())
% <- processing
% ^ punctuation.bracket
%  ^ keyword
%             ^ operator
%              ^ punctuation.bracket
%               ^ punctuation.bracket
%                ^ punctuation.bracket

# (define-markup-command (bar layout properties input-markup) (markup?)
; <- processing
; ^ punctuation.bracket
;  ^ identifier.core.function
;                        ^ punctuation.bracket
;                                                           ^ punctuation.bracket
;                                                             ^ punctuation.bracket
;                                                              ^ identifier.core.function
;                                                                     ^ punctuation.bracket

  ( interpret-markup layout properties #{ \markup #input-markup #}))
  % <- punctuation.bracket
  % ^ identifier.core.function
  %                                    ^ punctuation.bracket
  %                                       ^ keyword
  %                                               ^ processing
  %                                                             ^ punctuation.bracket
  %                                                               ^ punctuation.bracket
  %                                                                ^ punctuation.bracket

\score {
% <- keyword
%      ^ punctuation.bracket

  \new Staff="foo" {
  % <- keyword
  %    ^ identifier.core.type.context
  %         ^ operator
  %          ^ string.delimiter.left
  %           ^ string
  %              ^ string.delimiter.right
  %                ^ punctuation.bracket

    \clef mezzosoprano
    % <- identifier.core.function
    %     ^ identifier.core.constant.clef

    \key c \phrygian
    % <- identifier.core.function
    %      ^ identifier.core.constant.scale

    \repeat unfold 1 { }
    % <- identifier.core.function
    %       ^ identifier.core.constant.repeat_type
    %              ^ value.number
    %                ^ punctuation.bracket
    %                  ^ punctuation.bracket

    < \breve >>> q1*3/2\^
    % <- punctuation.bracket
    % ^ value.number
    %        ^ invalid
    %          ^ punctuation.bracket
    %            ^ keyword
    %             ^ value.number
    %              ^ punctuation
    %               ^ value.number
    %                ^ value.number
    %                 ^ value.number
    %                  ^ identifier.core.function

    << { 1 \< } \\ { 2 \! } >>
    % <- punctuation.bracket
    %  ^ punctuation.bracket
    %    ^ value.number
    %      ^ identifier.core.global
    %         ^ punctuation.bracket
    %           ^ punctuation.bracket
    %              ^ punctuation.bracket
    %                ^ value.number
    %                  ^ identifier.core.global
    %                     ^ punctuation.bracket
    %                       ^ punctuation.bracket

    # (define bar #{
    % <- processing
    % ^ punctuation.bracket
    %  ^ keyword
    %             ^ punctuation.bracket
    %              ^ punctuation.bracket
      \relative {
      % <- identifier.core.function
      %         ^ punctuation.bracket
        # (make-sequential-music
        ; <- processing
        ; ^ punctuation.bracket
        ;  ^ identifier.core.function
          ( map (lambda (%baz) #{ s1 #})
          ; <- punctuation.bracket
          ; ^ identifier.core.function
          ;     ^ punctuation.bracket
          ;      ^ keyword
          ;             ^ punctuation.bracket
          ;              ^ !
          ;                  ^ punctuation.bracket
          ;                    ^ punctuation.bracket
          ;                     ^ punctuation.bracket
          ;                        ^ value.number
          ;                          ^ punctuation.bracket
          ;                            ^ punctuation.bracket
               ( iota 1)))
               % <- punctuation.bracket
               % ^ identifier.core.function
               %      ^ value.number
               %       ^ punctuation.bracket
               %        ^ punctuation.bracket
               %         ^ punctuation.bracket

      }
      % <- punctuation.bracket
    #})
    % <- punctuation.bracket
    %^ punctuation.bracket
    % ^ punctuation.bracket

    \tweak when ##f
    % <- identifier.core.function
    %      ^ identifier.core.property.graphical_object
    %           ^ processing
    %            ^ value.boolean

    \override NoteHead.labels = ""
    % <- keyword
    %         ^ identifier.core.type.graphical_object
    %                 ^ punctuation
    %                  ^ identifier.core.property.graphical_object
    %                         ^ operator
    %                           ^ string.delimiter.left
    %                            ^ string.delimiter.right
  }
  % <- punctuation.bracket
}
% <- punctuation.bracket

\lyrics {
% <- keyword
%       ^ punctuation.bracket
  flag labels when used systems-per-page
  % <- !
  %    ^ !
  %           ^ !
  %                ^ !
  %                     ^ !
  % The assertion ! succeeds when no highlighting is applied.
}
% <- punctuation.bracket

\paper {
% <- keyword
%      ^ punctuation.bracket
  systems-per-page = 1
  % <- identifier.core.variable
  %                ^ operator
  %                  ^ value.number
}
% <- punctuation.bracket
