
function out = solution(A)

    profit = 0;
    min_price = A(1); % Matlab is 1-indexed !
    
    for i = 2:length(A)
        profit_here = max(0, A(i) - min_price);
        profit = max(profit_here, profit);
        
        min_price = min(min_price, A(i));
    end
    
    out = profit;
end